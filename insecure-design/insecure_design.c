#include <stdio.h>

// Insecure: Hardcoded password
char* getPassword() {
    return "supersecret123";
}

int main() {
    char* password = getPassword();
    printf("Password: %s\n", password);
    return 0;
}
