# import re 
# email_pattern= r'^[a-zA-Z0-9_]+@\w+\.\w{2,}$'
# if re.match(email_pattern, "adityadeshwal96@gmail.com"):
#     print("matched💕")
# else :
#     print("wrong😑")

# # import re
# password=r'^(?=.*[A-Z])(?=.*[!@#$%^])[a-zA-Z0-9!@#$%^&*]{8,20}$'
# # if re.match(password, "aditya#E"):
# #     print("matched😍")
    
import json

email = input("Email: ")
password = input("password: ")

newUser = {"email": email, "password": password}

with open("./users.json", "r") as users_file:
    users_json = users_file.read()
    users = json.loads(users_json)

users.append(newUser)
users_json = json.dumps(users, indent=4)

with open("./users.json", "w") as users_file:
    users_file.write(users_json)
    



# users_json = json.dumps(users, indent=4)
# with open("./users.json", "w") as users_file:
#     users_file.write(users_json)
#     print("Done!")
# print(users_json, type(users_json))
# print("=============")
# print(users, type(users))

# print(users)
# email = input("Enter your email address: ")
# password = input("password")

# users.append({"email": email, "password": password})
# print("============")
# print(users)



# # print("-------login_page-----------")

# email = input("Enter your email: ")
# password = input("Enter your password: ")

# logged_in = False

# for user in users:
#     if user["email"] == email and user["password"] == password:
#         logged_in = True
#         break

# if logged_in:
#     print("Login Successful! Welcome✅", email)
# else:
#     print("Invalid email or password❌")
