package main

import (
    "net/http"
)

func fetchURL(userURL string) {
    resp, _ := http.Get(userURL)
    defer resp.Body.Close()
}