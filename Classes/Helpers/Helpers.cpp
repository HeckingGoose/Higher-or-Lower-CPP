#include "Helpers.h"

std::string ReadConsoleLine(std::istream& stream)
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