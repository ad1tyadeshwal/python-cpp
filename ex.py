import json 

users = [
    {"email": "", "password": ""}
]

users_json = json.dumps(users, indent=4)
with open("./users.json", "w") as users_file:
     users_file.write(users_json)
     print("Done!")