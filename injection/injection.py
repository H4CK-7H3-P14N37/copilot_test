import os

def list_dir(user_input):
    os.system(f"ls {user_input}")  # Unsanitized input