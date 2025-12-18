/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 10:37:40 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/18 02:26:43 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <string>

class Zombie {
 public:
  void announce(void) const;
  void SetName(const std::string& name);
  Zombie(const std::string& name);
  Zombie(const Zombie& other);
  Zombie& operator=(const Zombie& other);
  ~Zombie();

 private:
  std::string name;  // NO LINT
};

Zombie* newZombie(std::string name);  // NO LINT
void    randomChump(std::string name);

#endif
