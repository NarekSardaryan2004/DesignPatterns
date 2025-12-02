#ifndef EDITOR_HPP
#define EDITOR_HPP

#include <string>

class Editor
{
public:
    void setText(const std::string& text);
    const std::string getText() const;
    void copy();
    void paste();
    void restore(const std::string& text);
private:
    std::string m_text;
    std::string m_clipboard;
};

#endif // EDITOR_HPP