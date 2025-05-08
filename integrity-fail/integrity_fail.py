import requests

def update():
    code = requests.get("http://insecure.com/update.py").text
    exec(code)  # Executing remote code