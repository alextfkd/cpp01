/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 12:08:27 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/27 10:59:04 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce() const {
  std::cout << this->name << ": "
            << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string& name) { this->name = name; }

Zombie::Zombie() { this->name = "John Doe"; }

Zombie::Zombie(const std::string& name) { this->name = name; }

Zombie::~Zombie() { std::cout << this->name << " is destroyed." << std::endl; }

Zombie::Zombie(const Zombie& other) { this->name = other.name; }  // NOLINT

Zombie& Zombie::operator=(const Zombie& other) {
  if (this != &other) {
    this->name = other.name;
  }
  return (*this);
}  // NOLINT
