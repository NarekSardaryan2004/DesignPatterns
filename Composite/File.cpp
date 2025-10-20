#include "File.hpp"

File::File(std::string name) : name(std::move(name)) {}

void File::show(int indent) const
{
    std::cout << std::string(indent, ' ') << "- File: " << name << "\n";
}