#include <cstdlib>
#include <string>

void runCommand(const std::string& userInput) {
    std::string command = "ls " + userInput;
    system(command.c_str()); // Unsanitized input
}