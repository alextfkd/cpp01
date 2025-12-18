/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 12:31:35 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/18 03:08:33 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char* argv[]) {
  (void)argc;
  (void)argv;
  Zombie* zombies = zombieHorde(4, "ugougo");
  int     idx     = 0;
  while (idx < 4) {
    std::cout << "index: " << idx << std::endl;
    zombies[idx].announce();
    idx++;
  }
  delete[] zombies;
  return (0);
}
