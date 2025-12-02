#include <iostream>

#include "receiver/Editor.hpp"
#include "command/CopyCommand.hpp"
#include "command/PasteCommand.hpp"
#include "command/UndoCommand.hpp"
#include "invoker/Button.hpp"

int main()
{
    Editor editor;

    editor.setText("Hello");

    std::string prevState = editor.getText();

    CopyCommand copy(editor);
    PasteCommand paste(editor);
    UndoCommand undo(editor, prevState);

    Button copyBtn(&copy);
    Button pasteBtn(&paste);
    Button undoBtn(&undo);

    copyBtn.press();
    std::cout << editor.getText() << "\n";
    
    pasteBtn.press();
    std::cout << editor.getText() << "\n";

    undoBtn.press();
    std::cout << editor.getText() << "\n";

    std::cout << "Final text: " << editor.getText() << std::endl;
}
