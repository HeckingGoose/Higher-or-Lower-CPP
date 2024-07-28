#include <iostream>
#include <string>
#include "Classes/Helpers/Helpers.h"
#include "Classes/HighLow/HighLow.h"

int main()
{
    // Constants
    const std::string WELCOME_TEXT = "Welcome to Higher or Lower";
    const std::string TOO_HIGH = "Lower!";
    const std::string TOO_LOW = "Higher!";
    const std::string PROMPT_GUESS_TEXT = "Guess a number:";
    const std::string PROMPT_INPUT_PREFIX = ">>>";
    const std::string PROMPT_SETUP_UPPERBOUND = "Please input an upper bound:";
    const std::string PROMPT_SETUP_LOWERBOUND = "Please input a lower bound:";
    const uint32_t SEED = std::time(0);

    // Variables
    bool running = true;

    // Display welcome text
    std::cout << HLC::WELCOME_TEXT << "\n";

    // Set std::rand seed
    std:srand(SEED);

    // Prompt user to input an upper bound for random value

    // Begin main loop
    while (running)
    {
        // Declare guess
        std::string guess;

        // Display guess text
        std::cout << PROMPT_GUESS_TEXT << "\n" << PROMPT_INPUT_PREFIX;

        // Read user input
        guess = ReadConsoleLine(std::cin);

    }
    return 0;
}