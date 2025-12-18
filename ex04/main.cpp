/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatsuma <tkatsuma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 02:47:46 by tkatsuma          #+#    #+#             */
/*   Updated: 2025/12/18 08:36:36 by tkatsuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex04.hpp"

static void RaiseArgcErr(void);
static bool Infile2String(const std::string& infile, std::string& dest);
static void FtReplace(std::string& content, const std::string& target,
                      const std::string& insert);
static bool String2Outfile(const std::string& content, std::string& outfile);

/*
You must create and turn in your own tests to ensure that your program works
as expected.
*/
int main(int argc, char* argv[]) {
  if (argc != 4) {
    RaiseArgcErr();
    return (1);
  }
  std::string infile  = argv[1];
  std::string outfile = infile + ".replace";
  std::string target  = argv[2];
  std::string insert  = argv[3];
  std::string content;

  if (!Infile2String(infile, content)) {
    return (1);
  }
  FtReplace(content, target, insert);
  if (!String2Outfile(content, outfile)) {
    return (1);
  }
  return 0;
}

static void RaiseArgcErr(void) {
  std::cerr << "Error: Invalid arguments. Usage: ./ft_sed [filename] [s1] [s2]"
            << std::endl;
}

static bool Infile2String(const std::string& infile, std::string& dest) {
  const std::string kErrEmptyInfile = "Error: infile is empty.";
  const std::string kErrOpenFile    = "Error: cannot open file.";

  if (infile.empty()) {
    std::cerr << kErrEmptyInfile << std::endl;
    return false;
  }

  std::ifstream     fin(infile.c_str());
  std::stringstream sstr;
  if (!fin.is_open()) {
    std::cerr << kErrOpenFile << std::endl;
    return false;
  }
  sstr << fin.rdbuf();
  fin.close();
  dest = sstr.str();
  return true;
}

static void FtReplace(std::string& content, const std::string& target,
                      const std::string& insert) {
  size_t idx;
  size_t target_start;

  if (target.empty()) {
    return;
  }
  idx = 0;
  while (content[idx]) {
    target_start = content.find(target, idx);
    if (target_start == std::string::npos) {
      break;
    }
    content.erase(target_start, target.length());
    content.insert(target_start, insert);
    idx = target_start + insert.length();
  }
}

static bool String2Outfile(const std::string& content, std::string& outfile) {
  const std::string kErrOpenFile = "Error: cannot open file.";

  std::ofstream fout(outfile.c_str());
  if (!fout.is_open()) {
    std::cerr << kErrOpenFile << std::endl;
    return false;
  }
  fout << content;
  fout.close();
  return true;
}
