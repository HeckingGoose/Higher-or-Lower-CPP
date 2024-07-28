#include "HighLow.h"

const std::string HLC::WELCOME_TEXT = "Welcome to Higher or Lower";
const std::string HLC::TOO_HIGH = "Lower!";
const std::string HLC::TOO_LOW = "Higher!";
const std::string HLC::PROMPT_GUESS_TEXT = "Guess a number:";
const std::string HLC::PROMPT_INPUT_PREFIX = ">>>";
const std::string HLC::PROMPT_SETUP_UPPERBOUND = "Please input an upper bound:";
const std::string HLC::PROMPT_SETUP_LOWERBOUND = "Please input a lower bound:";
const char HLC::NEW_LINE = '\n';
const u_int32_t HLC::SEED = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
