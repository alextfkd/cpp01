/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:55:55 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/26 15:33:03 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char* argv[]) {
  std::string kArgError =
      "Error: invalid arguments. Use DEBUG, INFO, WARNING or ERROR "
      "instead.";
  if (argc != 2) {
    std::cout << kArgError << std::endl;
    return (1);
  }
  Harl        harl;
  std::string level = argv[1];
  harl.complain(level);
  return (0);
}
