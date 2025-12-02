#ifndef PASTECOMMAND_HPP
#define PASTECOMMAND_HPP

#include "Command.hpp"
#include "../receiver/Editor.hpp"

class PasteCommand : public Command
{
public:
    PasteCommand(Editor& editor);

    void execute() override;
private:
    Editor& m_editor;
};

#endif // PASTECOMMAND_HPP