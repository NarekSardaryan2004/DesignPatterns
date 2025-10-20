#include "Folder.hpp"

Folder::Folder(std::string name) : name(std::move(name)) {}

void Folder::add(std::shared_ptr<FileSystemItem> item)
{
    items.push_back(item);
}

void Folder::show(int indent) const
{
    std::cout << std::string(indent, ' ') << "+ Folder: " << name << "\n";

    for (const auto& item : items) {
        item->show(indent + 2);
    }
}