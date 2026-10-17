#include <iostream>
#include <string>
#include <fstream>
#include <typeinfo>

// create a new file called ([filename].replace)
  // open file for writing
  // std::ofstream(filename, std::ios::binary)
  //               .write(reinterpret_cast<char*>(&d), sizeof d) << 123 << "abc";
// check errors

// __________________________________________________________________________________________

// read from filename
/*char c = fs.get();

// check errors when opening/reading from filename

while (fs.good()) {
std::cout << c;
c = fs.get();
// if (ft_strcmp(str, s1, std::size(s1)))
  // replace_and_write()
}
*/
// __________________________________________________________________________________________

// replace_and_write
// update s1 with s2
  // check errors when updating s1 with s2
// write to [filename].replace
  // check errors when writing to filename.replace

int file_exists(const std::string& filename)
{
  std::ifstream fs;
  fs.open(filename, std::ifstream::in);

  return fs.is_open();
}

int main(int ac, char **av)
{
  (void)av;
  if (ac != 4)
  {
    std::cout << "Error: Missing params" << std::endl;
    return (1);
  }

  if (file_exists(av[1]) && !((std::string)av[2]).empty() && !((std::string)av[3]).empty())
  {
    std::cout << "Success: Valid params" << std::endl;
    return (0);
  }
  std::cout << "Error: Invalid params" << std::endl;
  // fs.close();
  return (1);
}
