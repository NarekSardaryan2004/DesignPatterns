#ifndef FILE_HPP
#define FILE_HPP

#include "FileSystemItem.hpp"
#include <string>

class File : public FileSystemItem
{
public:
    explicit File(std::string name);
    void show(int indent = 0) const override;
private:
    std::string name;
};

#endif // FILE_HPP