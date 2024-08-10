#include "Helpers.h"

// HC Class
const std::string HC::INVALID_BASE = "Not a valid ";
const std::string HC::INVALID_INTEGER = HC::INVALID_BASE + "integer.";
const std::string HC::TELL_RESUBMIT = "Please retry.";
const std::string HC::INPUT_PREFIX = ">>>";
const std::string HC::QUIT_TEXT = "Press any key to quit...";
const char HC::NEW_LINE = '\n';

std::string ReadLineFromStream(std::istream& stream)
{
    // Declare variables
    char cache;
    std::string output;

    // Waiting prompt
    std::cout << HC::INPUT_PREFIX << ' ';

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
int32_t ReadNumberFromStream(std::istream& stream)
{
    // Declare variables
    bool passed = false;
    int32_t output;

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
            std::cout << HC::INVALID_INTEGER << HC::NEW_LINE;
        }
    }
    while (!passed);

    // Return output
    return output;

    // Move out of this and into main, so that reloops work proper
}
void QuitPrompt()
{
    // Display wait prompt
    std::cout << HC::QUIT_TEXT;

    // Wait for any key
    std::cin.get();
}