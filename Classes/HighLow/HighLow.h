#ifndef HIGHLOW_H
#define HIGHLOW_H

#include <string>
#include <chrono>

class HLC
{
    public:
    static const std::string WELCOME_TEXT;
    static const std::string TOO_HIGH;
    static const std::string TOO_LOW;
    static const std::string WON;
    static const std::string PROMPT_INPUT_PREFIX;
    static const std::string PROMPT_SETUP_UPPERBOUND;
    static const std::string PROMPT_SETUP_LOWERBOUND;
    static const u_int32_t SEED;
};

#endif