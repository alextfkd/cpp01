/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 12:31:35 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/18 02:17:55 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char* argv[]) {
  (void)argc;
  (void)argv;
  Zombie* zombie_0 = newZombie("zombie_0");
  Zombie* zombie_1 = newZombie("zombie_1");
  delete zombie_0;
  delete zombie_1;
  randomChump("random zombie 0");
  return (0);
}
