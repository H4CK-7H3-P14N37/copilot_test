#include <iostream>
#include <cstdlib>
#include <string>

// Injection vulnerability example
void runCommand(const std::string& userInput) {
    std::string command = "ls " + userInput;
    system(command.c_str()); // Unsanitized input
}

int main() {
    std::string input;
    std::cout << "Enter directory to list: ";
    std::getline(std::cin, input);

    runCommand(input);

    return 0;
}
