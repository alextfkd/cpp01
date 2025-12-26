/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 10:16:22 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/26 15:33:18 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H
#include <iostream>
#include <string>

enum HarlLevel {
  L_DEBUG   = 0,
  L_INFO    = 1,
  L_WARNING = 2,
  L_ERROR   = 3,
  L_OTHER   = -1
};

class Harl {
 private:
  static const int  kNumLevels = 4;
  const std::string kDebugMsg;
  const std::string kInfoMsg;
  const std::string kWarningMsg;
  const std::string kErrorMsg;
  void              debug(void);
  void              info(void);
  void              warning(void);
  void              error(void);
  Harl(const Harl& other);
  Harl& operator=(const Harl& other);

 public:
  Harl();
  ~Harl();
  void complain(std::string level);  // NOLINT
};

#endif
