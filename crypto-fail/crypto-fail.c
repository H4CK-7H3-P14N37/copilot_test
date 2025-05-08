#include <stdio.h>
#include <string.h>
#include <openssl/md5.h>

void hash_password(const char* password, unsigned char* result) {
    MD5((unsigned char*)password, strlen(password), result);
}