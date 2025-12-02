#include "UndoCommand.hpp"

UndoCommand::UndoCommand(Editor& editor, std::string previous) : m_editor(editor), m_previous(previous) {}

void UndoCommand::execute()
{
    m_editor.restore(m_previous);
}