# # def parent():
# #     def child():
# #         print("I am the child!")
# #     return child



# # child_func = parent()
# # child_func()

#         # def protector(func):
#         #     def wrapper(a,b ):
#         #         name = input("Tell us your name.")
#         #         if name=="Aditya":
#         #             func(a,b)
#         #         else:
#         #             print("You are not authorized to perform this action")
#         #     return wrapper
#         # @protector
#         # def add(a,b):
#         #     print(a+b)

#         # # add = protector(add)

#         # @protector
#         # def sub(a,b):
#         #     print(a-b)
            
#         # # sub = protector(sub)

#         # add(99, 10)
        
# # def counter():
# #     count = 1
# #     print(count)
# #     count = count+1
    
# # counter()
# # counter() 

# # def wrapper():
# #     count = 1
# #     def counter():
# #         nonlocal count
# #         print(count)
# #         count=count+1
        
# #     return counter


# # example_counter = wrapper()

# # example_counter() #1
# # example_counter() #2

# def counter(n):
#     if n==0:
#         return
#     counter(n-1)
#     print(n)

# counter(10)

def counter(n):
    if n==0:
        return 
    counter(n-2)
    print(n)
counter(20)    
