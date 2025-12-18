/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:30:20 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/18 12:48:02 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
  std::cout << this->kDebugMsg << std::endl << std::endl;
}
void Harl::info(void) { std::cout << this->kInfoMsg << std::endl << std::endl; }
void Harl::warning(void) {
  std::cout << this->kWarningMsg << std::endl << std::endl;
}
void Harl::error(void) {
  std::cout << this->kErrorMsg << std::endl << std::endl;
}

Harl::Harl(const Harl& other) { (void)other; }
Harl& Harl::operator=(const Harl& other) {
  (void)other;
  return *this;
}

Harl::Harl()
    : kDebugMsg(
          "[ DEBUG ]\n"
          "I love having extra bacon for my "
          "7XL-double-cheese-triple-pickle-specialketchup burger. I really "
          "do!"),
      kInfoMsg(
          "[ INFO ]\n"
          "I cannot believe adding extra bacon costs more money. You didn’t "
          "put enough bacon in my burger! If you did, I wouldn’t be asking "
          "for more!"),
      kWarningMsg(
          "[ WARNING ]\n"
          "I think I deserve to have some extra bacon for free. I’ve "
          "been coming for years, whereas you started working here just "
          "last month."),
      kErrorMsg(
          "[ ERROR ]\nThis is unacceptable! I want to speak to the manager "
          "now.") {}

Harl::~Harl() {}

void Harl::complain(std::string level) {  // NOLINT
  std::string levels[Harl::kNumLevels] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  void (Harl::*says[Harl::kNumLevels])(void) = {
      &Harl::debug,
      &Harl::info,
      &Harl::warning,
      &Harl::error,
  };
  HarlLevel hlevel;
  hlevel = L_OTHER;
  for (int idx = 0; idx < Harl::kNumLevels; idx++) {
    if (levels[idx] == level) {
      hlevel = static_cast<HarlLevel>(idx);
      break;
    }
  }
  switch (hlevel) {
    case L_DEBUG:
      (this->*says[L_DEBUG])();
      (this->*says[L_INFO])();
      (this->*says[L_WARNING])();
      (this->*says[L_ERROR])();
      break;

    case L_INFO:
      (this->*says[L_INFO])();
      (this->*says[L_WARNING])();
      (this->*says[L_ERROR])();
      break;

    case L_WARNING:
      (this->*says[L_WARNING])();
      (this->*says[L_ERROR])();
      break;

    case L_ERROR:
      (this->*says[L_ERROR])();
      break;

    default:
      std::cout << "[ Probably complaining about insignificant problems ]"
                << std::endl;
      break;
  }
}
