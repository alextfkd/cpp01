/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 20:04:39 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/17 01:25:17 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef WEAPON_H
#define WEAPON_H

class Weapon {
 private:
  std::string type;  // NOLINT

 public:
  Weapon();
  Weapon(const std::string& type);
  Weapon& operator=(const Weapon& other);
  ~Weapon();
  const std::string& getType(void);
  void               setType(const std::string& type);
};

#endif