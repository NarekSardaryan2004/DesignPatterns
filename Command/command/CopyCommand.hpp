#ifndef COPYCOMMAND_HPP
#define COPYCOMMAND_HPP

#include "Command.hpp"
#include "../receiver/Editor.hpp"

class CopyCommand : public Command
{
public:
    CopyCommand(Editor& editor);

    void execute() override;
private:
    Editor& m_editor;
};

#endif // COPYCOMMAND_HPP