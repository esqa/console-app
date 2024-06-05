#ifndef UNTITLED_PRINTING_H
#define UNTITLED_PRINTING_H

#define DEBUG_PRINT(message, color) Print(message, color, __func__, __LINE__)

#include <Windows.h>
#include <iostream>
#include <string>

enum Color {
    BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN, LIGHTGRAY, DARKGRAY, LIGHTBLUE, LIGHTGREEN, LIGHTCYAN, LIGHTRED, LIGHTMAGENTA, YELLOW, WHITE
};

class DebugPrint {
    public:
        void Print(std::string message, Color color, const char *funcName, int lineNum);

    private:
        void TextColor(Color color);
};

#endif//UNTITLED_PRINTING_H