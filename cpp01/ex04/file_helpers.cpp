#include "file_helpers.hpp"

static std::string replace_str(std::string line, std::string s1, std::string s2)
{
    size_t i = 0;
    std::string new_line;
    size_t pos = line.find(s1, i);
    std::string no_match;
    if (pos == std::string::npos)
        return (line);
    while ((pos = line.find(s1, i)) != std::string::npos)
    {
        if (pos > 0)
        {
            no_match = line.substr(i, pos - i);
            new_line.append(no_match);
        }
        new_line.append(s2);
        if (s1.size() == s2.size())
            i = pos + s2.size();
        else
            i = pos + s1.size();
        // check errors when updating s1 with s2
    }
    if (i < line.size())
    {
        no_match = line.substr(i, line.size());
        new_line.append(no_match);
    }
    // check errors
    return (new_line);
}

static std::ofstream create_new_file(std::string name)
{
    std::ofstream ofs(name + ".replace");
    return (ofs);
}

std::string  read_file(std::ifstream &fs, std::string filename, std::string s1, std::string s2)
{
    int i = 0;
    std::string line;
    std::string new_line;
    std::ofstream fs_replace;

    while (std::getline(fs, line))
    {
        line += '\n';
        new_line = replace_str(line, s1, s2);
        if (i == 0)
            fs_replace = create_new_file(filename);
        fs_replace.write(new_line.c_str(), new_line.size());
        i++;
    }
    if (i == 0)
        return ("Empty file");
    return ("Success: Valid params");
}

int file_exists(std::ifstream &fs, const std::string filename)
{
    fs.open(filename, std::ifstream::in);

    return fs.is_open();
}
