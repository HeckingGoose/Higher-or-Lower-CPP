#include "Helpers.h"

std::string ReadLineFromStream(std::istream& stream)
{
    // Declare variables
    char cache;
    std::string output;

    // Loop until line ending is found
    do
    {
        // Read character from stream
        cache = stream.get();

        // Check if value is not a line ender thingy
        if (cache != '\n')
        {
            output += cache;
        }
    }
    while (cache != '\n');
    
    // Return read data
    return output;
}
int ReadNumberFromStream(std::istream& stream)
{
    // Declare variables
    bool passed = false;
    int output;

    // Loop until we've succeeded
    do
    {
        // Try to do thing
        try
        {
            // Try to read and convert input
            output = std::stoi(ReadLineFromStream(stream));

            // On convert success
            passed = true;
        }
        // On fail
        catch(const std::exception& e)
        {
            // Set passed to false
            passed = false;
            
            // Tell user they did it wrong
            std::cout << "Not a valid number!";
        }
    }
    while (!passed);

    // Return output
    return output;

    // Move out of this and into main, so that reloops work proper
}