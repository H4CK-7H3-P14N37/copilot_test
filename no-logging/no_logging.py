def login(username, password):
    if password != get_pw(username):
        return "Invalid"  # No logging