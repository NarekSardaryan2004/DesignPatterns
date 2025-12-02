#include "CopyCommand.hpp"

CopyCommand::CopyCommand(Editor &editor) : m_editor(editor) {}

void CopyCommand::execute()
{
    m_editor.copy();
}