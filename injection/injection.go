package main

import (
    "os/exec"
)

func runCommand(userInput string) {
    cmd := exec.Command("sh", "-c", "ls "+userInput)
    cmd.Run()
}