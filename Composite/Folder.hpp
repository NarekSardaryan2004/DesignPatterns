#ifndef FOLDER_HPP
#define FOLDER_HPP

#include "FileSystemItem.hpp"
#include <vector>
#include <memory>
#include <string>

class Folder : public FileSystemItem
{
public:
    explicit Folder(std::string name);

    void add(std::shared_ptr<FileSystemItem> item);
    void show(int indent = 0) const override;
private:
    std::string name;
    std::vector<std::shared_ptr<FileSystemItem>> items;
};

#endif // FOLDER_HPP