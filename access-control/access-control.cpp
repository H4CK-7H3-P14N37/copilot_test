#include <iostream>
#include <cstdlib>

void deleteUser(const std::string& username) {
    std::string command = "rm -rf /home/" + username;
    system(command.c_str()); // No authorization check
}