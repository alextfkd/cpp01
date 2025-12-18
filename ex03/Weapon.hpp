/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 20:04:39 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/18 03:30:45 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H
#include <string>

class Weapon {
 private:
  std::string type;  // NOLINT

 public:
  Weapon(const std::string& type);
  Weapon(const Weapon& other);
  Weapon& operator=(const Weapon& other);
  ~Weapon();

  const std::string& getType(void) const;
  void               setType(const std::string& type);
};

#endif