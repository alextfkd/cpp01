/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:30:20 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/18 12:16:41 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) { std::cout << this->kDebugMsg << std::endl; }
void Harl::info(void) { std::cout << this->kInfoMsg << std::endl; }
void Harl::warning(void) { std::cout << this->kWarningMsg << std::endl; }
void Harl::error(void) { std::cout << this->kErrorMsg << std::endl; }

Harl::Harl(const Harl& other) { (void)other; }
Harl& Harl::operator=(const Harl& other) {
  (void)other;
  return *this;
}

Harl::Harl()
    : kDebugMsg(
          "I love having extra bacon for my "
          "7XL-double-cheese-triple-pickle-specialketchup burger. I really "
          "do!"),
      kInfoMsg(
          "I cannot believe adding extra bacon costs more money. You didn’t "
          "put enough bacon in my burger! If you did, I wouldn’t be asking "
          "for more!"),
      kWarningMsg(
          "I think I deserve to have some extra bacon for free. I’ve "
          "been coming for years, whereas you started working here just "
          "last month."),
      kErrorMsg("This is unacceptable! I want to speak to the manager now.") {}

Harl::~Harl() {}

void Harl::complain(std::string level) {  // NOLINT
  std::string levels[Harl::kNumLevels] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  void (Harl::*says[Harl::kNumLevels])(void) = {
      &Harl::debug,
      &Harl::info,
      &Harl::warning,
      &Harl::error,
  };
  for (int idx = 0; idx < Harl::kNumLevels; idx++) {
    if (levels[idx] == level) {
      (this->*says[idx])();
      return;
    }
  }
  std::cout << "..." << std::endl;
}
