#include "Editor.hpp"

void Editor::setText(const std::string& text)
{
    m_text = text;
}

const std::string Editor::getText() const
{
    return m_text;
}

void Editor::copy()
{
    m_clipboard = m_text;
}

void Editor::paste()
{
    m_text += m_clipboard;
}

void Editor::restore(const std::string& text)
{
    m_text = text;
}