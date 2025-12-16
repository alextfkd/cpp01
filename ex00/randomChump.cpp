/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 12:30:02 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/16 12:54:32 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name) {  // NOLINT
  Zombie *new_zombie = new Zombie();
  new_zombie->SetName(name);
  new_zombie->announce();
  delete new_zombie;
}
