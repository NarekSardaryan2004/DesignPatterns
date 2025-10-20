#ifndef FILESYSTEMITEM_HPP
#define FILESYSTEMITEM_HPP

#include <iostream>

class FileSystemItem
{
public:
    virtual ~FileSystemItem() = default;

    virtual void show(int indent = 0) const = 0;
};

#endif // FILESYSTEMITEM_HPP