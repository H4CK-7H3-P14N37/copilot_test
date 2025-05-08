import requests

def get_internal_data(url):
    return requests.get(url).text