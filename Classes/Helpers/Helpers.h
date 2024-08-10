#ifndef HELPERS_H
#define HELPERS_H

#include <string>
#include <iostream>

class HC
{
    private:
    static const std::string INVALID_BASE;
    public:
    static const std::string INVALID_INTEGER;
    static const std::string TELL_RESUBMIT;
    static const std::string INPUT_PREFIX;
    static const std::string QUIT_TEXT;
    static const char NEW_LINE;
};

std::string ReadLineFromStream(std::istream& stream);
int32_t ReadNumberFromStream(std::istream& stream);
void QuitPrompt();

#endif