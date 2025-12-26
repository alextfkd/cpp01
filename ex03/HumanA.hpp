/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 20:05:33 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/26 15:32:11 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Weapon.hpp"

#ifndef HUMAN_A_H

/*
Now, create two classes: HumanA and HumanB.
They both have a Weapon and a name.
They also have a member function attack() that displays (without the angle
brackets): <name> attacks with their <weapon type>

HumanA and HumanB are almost identical except for these two small details:
• While HumanA takes the Weapon in its constructor, HumanB does not.
• HumanB may not always have a weapon, whereas HumanA will always be armed.
*/
class HumanA {
 private:
  std::string name_;
  Weapon&     weapon_;
  HumanA(const HumanA& other);
  HumanA& operator=(const HumanA& other);

 public:
  HumanA(const std::string& name, Weapon& weapon);
  ~HumanA();
  void attack();
};

#define HUMAN_A_H
#endif
