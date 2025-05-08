#include <iostream>
#include <cstdlib>

void deleteUser(const std::string& username) {
    std::string command = "rm -rf /home/" + username;
    system(command.c_str()); // No authorization check
}

int main() {
    std::string user = "testuser";  // Replace with test value
    deleteUser(user);
    return 0;
}
