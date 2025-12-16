/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:52:16 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/16 13:58:52 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {  // NOLINT
  Zombie *zombies = new Zombie[N];
  int     idx     = 0;
  while (idx < N) {
    zombies[idx].SetName(name);
    idx++;
  }
  return (zombies);
}
