#include <iostream>
#include <string>
#include "Classes/Helpers/Helpers.cpp"

int main()
{
    // Constants
    std::string WELCOME_TEXT = "Welcome to Higher or Lower";
    std::string GUESS_TEXT = "Guess a number:";
    std::string GUESS_PREFIX = ">>>";
    std::string TOO_HIGH = "Lower!";
    std::string TOO_LOW = "Higher!";

    // Variables
    bool running = true;

    // Display welcome text
    std::cout << WELCOME_TEXT << "\n";

    // Begin main loop
    while (running)
    {
        // Declare guess
        std::string guess;

        // Display guess text
        std::cout << GUESS_TEXT << "\n" << GUESS_PREFIX;

        // Read user input
        guess = ReadConsoleLine(std::cin);

    }
    return 0;
}