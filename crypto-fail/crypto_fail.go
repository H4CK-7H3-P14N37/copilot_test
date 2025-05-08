package main

import (
    "crypto/md5"
    "fmt"
)

func insecureHash(data string) []byte {
    hash := md5.Sum([]byte(data))
    return hash[:]
}