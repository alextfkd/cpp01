/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 19:35:38 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/16 19:58:40 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
  std::string  greetings = "HI THIS IS BRAIN";
  std::string* stringPTR = &greetings;
  std::string& stringREF = greetings;

  std::cout << "Starting demo for cpp01/ex02." << std::endl;

  std::cout << "greetings:  " << greetings << std::endl;

  std::cout << "Printing out each memory address of the variables." << greetings
            << std::endl;
  std::cout << "- &greetings: " << &greetings << std::endl;
  std::cout << "- stringPTR:  " << stringPTR << std::endl;
  std::cout << "- &stringREF: " << &stringREF << std::endl;
  std::cout << "Printing out each values of the variables." << greetings
            << std::endl;
  std::cout << "- greetings:  " << greetings << std::endl;
  std::cout << "- *stringPTR: " << *stringPTR << std::endl;
  std::cout << "- stringREF:  " << stringREF << std::endl;
  std::cout << "Demo for cpp01/ex02 is over." << std::endl;
  return (0);
}
