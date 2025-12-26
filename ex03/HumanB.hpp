/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 20:05:27 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/26 15:32:17 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
#define HUMAN_B_H

#include <iostream>

#include "Weapon.hpp"

/*
Now, create two classes: HumanA and HumanB.
They both have a Weapon and a name.
They also have a member function attack() that displays (without the angle
brackets): <name> attacks with their <weapon type>

HumanA and HumanB are almost identical except for these two small details:
• While HumanA takes the Weapon in its constructor, HumanB does not.
• HumanB may not always have a weapon, whereas HumanA will always be armed.
*/
class HumanB {
 private:
  std::string name_;
  Weapon*     weapon_;
  HumanB(const HumanB& other);
  HumanB& operator=(const HumanB& other);

 public:
  HumanB(const std::string& name);
  ~HumanB();
  void setWeapon(Weapon& weapon);
  void attack();
};

#endif
