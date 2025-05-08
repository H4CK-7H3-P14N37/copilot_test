import hashlib

def insecure_hash(data):
    return hashlib.md5(data.encode()).hexdigest()