#ifndef UNDOCOMMAND_HPP
#define UNDOCOMMAND_HPP

#include "Command.hpp"
#include "../receiver/Editor.hpp"

class UndoCommand : public Command
{
public:
    UndoCommand(Editor& editor, std::string previous);

    void execute() override;
private:
    Editor& m_editor;
    std::string m_previous;
};

#endif // UNDOCOMMAND_HPP