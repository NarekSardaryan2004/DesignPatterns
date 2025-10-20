#include "File.hpp"
#include "Folder.hpp"
#include <memory>

int main()
{
    auto root = std::make_shared<Folder>("Root");
    auto docs = std::make_shared<Folder>("Documents");
    auto pics = std::make_shared<Folder>("Pictures");

    auto file1 = std::make_shared<File>("resume.pdf");
    auto file2 = std::make_shared<File>("notes.txt");
    auto file3 = std::make_shared<File>("photo.jpg");

    docs->add(file1);
    docs->add(file2);
    pics->add(file3);

    root->add(docs);
    root->add(pics);

    root->show();
    
    return 0;
}