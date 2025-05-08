import os

def delete_account(username):
    os.system(f"rm -rf /home/{username}")  # No permission check