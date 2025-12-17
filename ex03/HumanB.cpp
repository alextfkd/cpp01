/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 00:39:07 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/17 01:53:57 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : name_(name) { this->weapon_ = NULL; }

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weapon) { this->weapon_ = &weapon; }

void HumanB::attack() {
  std::cout << this->name_ << " attacks with their " << this->weapon_->getType()
            << std::endl;
}
