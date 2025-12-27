# student =["aditya ","kritin "]
# aditya ={
#     "full name ":"aditya deshwal",
#     "age":18,
#     "home":"nit"    
# }
# for key in aditya:
#     print(aditya[key])

# kritin ={
#     "full name ":"kritin singla",
#     "age":18,
#     "home":"sec28"
# }

# print(aditya["full name"])
# print(kritin["fullname"])


# def startengine():
#     print("starting engine")
    
# car = {
#     "company":"ford",
#     "model":"base",
#     "colour":["red","yellow","green"],
#     "price":1234567890,
#     "owner":{
#         "name":"aditya",
#         "state":"haryana",
#         "age":18
#     },
#     "start":startengine
#        }    

# print(chr["colour"])



# while True:   
#     a = input(" >> ")

#     b = float(input("Enter first number: "))    
#     c = float(input("Enter second number: "))

#     if a == "add":
#         print("Result =", b + c)
#     elif a == "subtract":
#         print("Result =", b - c)
#     else:
#         print(" wrong ")


# to_do_list =[]
# while True:
#     a = input(">>")
    
#     if a == "add":
#         task = input("Enter task: ")
#         to_do_list.append(task)
#         print("Task added.")
#     elif a == "show":
#         for task in to_do_list:
#             print(task)
#     elif a == "delete":
#         for task in to_do_list:
#             print(task)
#         index = int(input("Enter task index: "))
#         del to_do_list[index-1]
#         print("Deleted!")
#     elif a=="edit":
#          for task in to_do_list:
#             print(task)
#          index = int(input("Enter index need to be updated: "))
#          to_do_list[index-1]
#          to_do_list[index-1]= input("chage:")
#          print("updated")
#     else :
#         print("tast not found")         

        
        
import os

while True:
    action = input("Enter action (create/read/append/delete/exit): ")

    if action == "create":
        name = input("File name: ")
        content = input("Write something: ")
        with open(name, "w") as f:
            f.write(content)
        print("Created.")

    elif action == "read":
        name = input("File name: ")
        if os.path.exists(name):
            with open(name, "r") as f:
                print(f.read())
        else:
            print("File not found.")

    elif action == "append":
        name = input("File name: ")
        if os.path.exists(name):
            content = input("Add text: ")
            with open(name, "a") as f:
                f.write("\n" + content)
            print("Added.")
        else:
            print("File not found.")

    elif action == "delete":
        name = input("File name: ")
        if os.path.exists(name):
            os.remove(name)
            print("Deleted.")
        else:
            print("File not found.")

    elif action == "exit":
        break

    else:
        print("Invalid action.")
        
        
        print("login sattement :")
    import os
    
