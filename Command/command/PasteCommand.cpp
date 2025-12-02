#include "PasteCommand.hpp"

PasteCommand::PasteCommand(Editor& editor) : m_editor(editor) {}

void PasteCommand::execute()
{
    m_editor.paste();
}