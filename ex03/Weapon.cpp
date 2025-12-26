/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 20:27:20 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/26 15:32:29 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) { this->setType(type); }

Weapon& Weapon::operator=(const Weapon& other) {
  if (this != &other) {
    this->type = other.type;
  }
  return *this;
}

Weapon::~Weapon() {}

const std::string& Weapon::getType(void) const {
  const std::string& ref_type = this->type;
  return (ref_type);
}

void Weapon::setType(const std::string& type) { this->type = type; }
