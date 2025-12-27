/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 10:37:40 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/27 10:58:54 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <string>

class Zombie {
 private:
  std::string name;  // NO LINT

 public:
  void announce(void) const;
  void setName(const std::string& name);
  Zombie();
  Zombie(const std::string& name);
  Zombie(const Zombie& other);
  Zombie& operator=(const Zombie& other);
  ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);  // NOLINT

#endif
