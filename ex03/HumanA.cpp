/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 00:04:58 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/17 01:48:32 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon)
    : name_(name), weapon_(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() {
  std::cout << this->name_ << " attacks with their " << this->weapon_.getType()
            << std::endl;
}
