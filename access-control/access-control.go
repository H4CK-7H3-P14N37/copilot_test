package main

import (
    "os"
)

func deleteFile(username string) {
    os.Remove("/data/private/" + username + "/file.txt")
}