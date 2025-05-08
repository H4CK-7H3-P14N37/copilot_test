#include <stdio.h>
#include <string.h>
#include <openssl/md5.h>

// Insecure hash function using MD5
void hash_password(const char* password, unsigned char* result) {
    MD5((unsigned char*)password, strlen(password), result);
}

int main() {
    const char* password = "supersecret123";
    unsigned char result[MD5_DIGEST_LENGTH];

    hash_password(password, result);

    printf("MD5 hash of '%s': ", password);
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        printf("%02x", result[i]);
    }
    printf("\n");

    return 0;
}
