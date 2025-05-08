def login(username, password):
    stored_password = get_password_from_db(username)
    return password == stored_password  # No hashing