#include <iostream>
#include <fstream>
#include <string>

/* file_helpers.cpp */
void replace_and_write(std::ofstream &fs, char content, std::string s1, std::string s2)
{
  (void)s1;
  (void)s2;
  // update s1 with s2
  // check errors when updating s1 with s2

  fs.write(&content, sizeof content);
  // check errors
}

void  read_file(std::ifstream &fs, std::ofstream &fs_replace, std::string s1, std::string s2)
{
  char c = fs.get();

  while (fs.good())
  {
    replace_and_write(fs_replace, c, s1, s2);
    c = fs.get();
  }
}

std::ofstream create_new_file(std::string name)
{
  std::ofstream ofs(name + ".replace");
  return (ofs);
}

int file_exists(std::ifstream &fs, const std::string filename)
{
  fs.open(filename, std::ifstream::in);

  return fs.is_open();
}
/* file_helpers.cpp */


/* validation.cpp */
bool valid_params(std::ifstream &fs, char **av)
{
  if (file_exists(fs, av[1])
      && !std::string(av[2]).empty()
      && !std::string(av[3]).empty())
    return (true);
  return (false);
}
/* validation.cpp */

int main(int ac, char **av)
{
  if (ac != 4)
  {
    std::cout << "Error: Missing params" << std::endl;
    return (1);
  }

  std::ifstream fs;
  std::ofstream fs_replace;
  if (valid_params(fs, av))
  {
    fs_replace = create_new_file(av[1]);
    read_file(fs, fs_replace, av[2], av[3]);
    std::cout << "Success: Valid params" << std::endl;
    fs.close();
    return (0);
  }

  std::cout << "Error: Invalid params" << std::endl;
  fs.close();
  return (1);
}
