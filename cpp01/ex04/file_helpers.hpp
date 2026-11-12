#ifndef FILE_HELPERS_H
#define FILE_HELPERS_H

#include <fstream>
#include <string>

int file_exists(std::ifstream &fs, const std::string filename);
std::string  read_file(std::ifstream &fs, std::string filename, std::string s1, std::string s2);

#endif
