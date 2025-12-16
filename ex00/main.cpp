/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 12:31:35 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/16 12:55:02 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char *argv[]) {
  (void)argc;
  (void)argv;
  Zombie *z0 = newZombie("z0");
  Zombie *z1 = newZombie("z1");
  delete z0;
  delete z1;
  randomChump("r0");
  return (0);
}
