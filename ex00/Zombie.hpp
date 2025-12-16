/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 10:37:40 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/16 12:53:03 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#ifndef ZOMBIE_H
#define ZOMBIE_H

class Zombie {
 public:
  void announce(void) const;
  void SetName(const std::string &name);
  Zombie();
  ~Zombie();

 private:
  std::string name;  // NO LINT
  Zombie(const Zombie &other);
  Zombie &operator=(const Zombie &other);
};

Zombie *newZombie(std::string name);  // NO LINT
void    randomChump(std::string name);

#endif
