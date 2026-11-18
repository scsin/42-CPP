#include <iostream>
#include <fstream>
#include <string>
#include "file_helpers.hpp"

static bool valid_params(std::ifstream &fs, char **av)
{
    if (file_exists(fs, av[1]))
        return (true);
    return (false);
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Error: Missing params" << std::endl;
        return (1);
    }

    std::ifstream fs;
    std::string msg;
    if (valid_params(fs, av))
    {
        msg = read_file(fs, av[1], av[2], av[3]);
        std::cout << msg << std::endl;
        fs.close();
        return (0);
    }

    std::cout << "Error: Invalid params" << std::endl;
    fs.close();
    return (1);
}


/*
 1. Empty file

./ex04 empty.file o O

Does it produce an empty .replace file?

2. Empty s1

./ex04 test.file "" O

Does it avoid an infinite loop?

3. Empty s2

./ex04 test.file o ""

Does it correctly delete every occurrence of o?

4. Both empty

./ex04 test.file "" ""

Does it avoid hanging or crashing?

5. No matches

./ex04 test.file xyz ABC

Does the output preserve the original content?

6. Entire line matches

./ex04 test.file ooo O

Does it replace every occurrence?

7. Repeated matches

./ex04 test.file oo X

Does oooo become XX, not XXXX?

8. Overlapping patterns

./ex04 test.file aa X

Does aaaa become XX?

9. Spaces

./ex04 test.file " " _

Does it replace spaces correctly?

10. Special characters

./ex04 test.file "." "!"

Does . get treated as a literal dot?

11. Case sensitivity

./ex04 test.file o O

Does lowercase o change while uppercase O remains unchanged?

12. Newlines

./ex04 test.file "\n" X

Does your implementation handle newline characters as expected?

13. Empty file name ./ex04 "" o O

14. Unreadable input file
touch no_read.file
chmod 000 no_read.file
./ex04 no_read.file o O

15. for banana, this should result in "ba" ./ex04 test.file an ""
*/
