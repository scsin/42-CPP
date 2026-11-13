#include "file_helpers.hpp"

static std::string replace_str(std::string line, std::string s1, std::string s2)
{
    if (s1.empty())
        return (line);
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
    }
    if (i < line.size())
    {
        no_match = line.substr(i, line.size());
        new_line.append(no_match);
    }
    return (new_line);
}

std::string  read_file(std::ifstream &fs, std::string filename, std::string s1, std::string s2)
{
    std::string line;
    std::string new_line;
    std::ofstream fs_replace;

    fs_replace.open((filename + ".replace").c_str());
    while (std::getline(fs, line))
    {
        line += '\n';
        new_line = replace_str(line, s1, s2);
        fs_replace.write(new_line.c_str(), new_line.size());
    }
    return ("Success: Valid params");
}

int file_exists(std::ifstream &fs, const std::string filename)
{
    fs.open(filename.c_str(), std::ifstream::in);

    return fs.is_open();
}
