#include <iostream>
#include <string>
#include <chrono>
#include "Classes/Helpers/Helpers.h"
#include "Classes/HighLow/HighLow.h"

int main()
{
    // Variables
    bool running = true;

    // Display welcome text
    std::cout << HLC::WELCOME_TEXT << HLC::NEW_LINE;

    // Set std::rand seed
    std:srand(HLC::SEED);

    // Prompt user to input an upper bound for random value
    std::cout << HLC::PROMPT_SETUP_UPPERBOUND << HLC::NEW_LINE;


    // Begin main loop
    while (running)
    {
        // Declare guess
        int guess;

        // Display guess text
        std::cout << HLC::PROMPT_GUESS_TEXT << HLC::NEW_LINE << HLC::PROMPT_INPUT_PREFIX;

        // Read user input
        guess = ReadNumberFromStream(std::cin);

        std::cout << guess;

    }
    return 0;
}