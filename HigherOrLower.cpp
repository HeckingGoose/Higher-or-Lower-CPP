#include <iostream>
#include <string>
#include <chrono>
#include "Classes/Helpers/Helpers.h"
#include "Classes/HighLow/HighLow.h"

int main()
{
    // Constants
    const std::string LOWERBOUND_FAIL = "Lower bound is larger than or equal to upper bound!";

    // Variables
    bool running = true;

    // Display welcome text
    std::cout << HLC::WELCOME_TEXT << HC::NEW_LINE;

    // Set std::rand seed
    std:srand(HLC::SEED);

    // Prompt user to input an upper bound for random value
    std::cout << HLC::PROMPT_SETUP_UPPERBOUND << HC::NEW_LINE;

    // Read user input
    int32_t upperBound = ReadNumberFromStream(std::cin);
    int32_t lowerBound = INT32_MAX;

    // Fetch lower bound
    do
    {
        // Prompt user to input a lower bound for random value
        std::cout << HLC::PROMPT_SETUP_LOWERBOUND << HC::NEW_LINE;

        // Read user input
        lowerBound = ReadNumberFromStream(std::cin);

        // On fail
        if (lowerBound >= upperBound)
        {
            std::cout << LOWERBOUND_FAIL << HC::NEW_LINE;
        }
    }
    while (lowerBound >= upperBound);

    // Calculate range
    int32_t boundRange = upperBound - lowerBound;

    // Create random number
    int32_t goal = (std::rand() % boundRange) + lowerBound + 1;

    // Begin main loop
    while (running)
    {
        // Declare guess
        int32_t guess;

        // Generate guess text
        std::string guessText = "Pick a number between " + std::to_string(lowerBound) + " and " + std::to_string(upperBound) + ":";

        // Display guess text
        std::cout << guessText << HC::NEW_LINE;

        // Read user input
        guess = ReadNumberFromStream(std::cin);

        // Too high
        if (guess > goal)
        {
            // Tell user they were too high
            std::cout << HLC::TOO_HIGH << HC::NEW_LINE;

            // Recalculate upper bound
            upperBound = upperBound > guess ? guess : upperBound;
        }
        else if (guess < goal)
        {
            // Tell user they were too low
            std::cout << HLC::TOO_LOW << HC::NEW_LINE;

            // Recalculate lower bound
            lowerBound = lowerBound < guess ? guess : lowerBound;
        }
        else
        {
            // Exit out of loop
            running = false;
        }
    }

    // Tell user that they've won
    std::cout << HLC::WON << HC::NEW_LINE;

    // Handle exit stuff
    QuitPrompt();

    // Return success
    return 0;
}