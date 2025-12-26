/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 00:04:58 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/26 15:32:08 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon)
    : name_(name), weapon_(weapon) {}

HumanA::HumanA(const HumanA& other)
    : name_(other.name_), weapon_(other.weapon_) {}

HumanA& HumanA::operator=(const HumanA& other) {
  if (this != &other) {
    this->name_   = other.name_;
    this->weapon_ = other.weapon_;
  }
  return *this;
}

HumanA::~HumanA() {}

void HumanA::attack() {
  std::cout << this->name_ << " attacks with their " << this->weapon_.getType()
            << std::endl;
}
