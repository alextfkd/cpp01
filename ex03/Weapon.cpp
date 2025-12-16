/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 20:27:20 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/16 21:15:28 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string type;  // NOLINT

Weapon::Weapon(const std::string& type) { this->setType(type); };

Weapon& Weapon::operator=(const std::string& type) {
  (void)type;
  return (*this);
};

Weapon::Weapon() {};

Weapon::~Weapon() {};

const std::string& Weapon::getType(void) {
  const std::string& ref_type = this->type;
  return (ref_type);
};

void Weapon::setType(const std::string& type) { this->type = type; }