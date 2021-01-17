# message =input("Tell me something,and I will repeat it back to you:")
# print(message)
# name = input("Please enter your name:")
# print("Hello " + name +"!")
# prompt = ("If you tell me your name ,we can personalize the message you see ")
# prompt +=("\nWhat is your name?")
# name = input(prompt)
# print("Hello " + name + ' !')
# age = input("How old are you ?")

# print(6%3)
# number = input("Enter a number,and I will tell you if it's even or odd :")
# number = int(number)
# if number%2 ==0:
#     print("The number " + str(number) + " is even.")
# else:
#     print("The number " + str(number) + " is odd.")
# current_number = 1
# while current_number<=5:
#     print(current_number)
#     current_number+=1
# prompt = "\nTell me something,and I will repeat it back to you."
# prompt+= "\nEnter 'quit' to end the program."
# message = ""
# active = True
# while True:
#     message = input(prompt)
#     print(prompt)
#     if message != 'quit':
#         print(message)
#     else:
#         active = False
# prompt = '\nPlease enter the  name of a city you have visited.'
# prompt += "\n(Enter 'quit' when you are finished.)"
# while True:
#     city = input(prompt)
#     if city = 'quit':
#         break
#     else :
#         print("I'd love to go" + city.title() + '!')
# current_number = 0
# while current_number < 10:
#     current_number += 1
#     if current_number%2 == 0:
#         continue
#     print(current_number)
#使用while处理列表和字典
#unconfirmed_users = ['aliens','brains','candace']
#confirmed_users = []
#验证每一个用户
#将通过验证的用户移动
# while unconfirmed_users:
#     current_user = unconfirmed_users.pop()
#     print(current_user)
#     confirmed_users.append(current_user)
# print(confirmed_users)
# print(unconfirmed_users )
# print("!")
#删除特定元素
# pets = ['dog','cat','dog','goldfish','cat','rabbit','cat'] 
# while 'cat' in pets:
#     pets.remove("cat")
# print(pets)
# responses = {}
# polling_active = True
# while polling_active:
#     #提示
#     name = input("What is your name?")
#     response = input("Which mountain would you like to climb someday?")
#     responses[name] = response
#     #看看是否还有人要继续
#     repeat = input("Would you like to let another person respond?(yes or no)")
#     if repeat == 'no':
#         polling_active = False
# #调查显示结果
# print("\n---Poll Result---")
# for name, response in responses.items():
#     print(name + " would like to climb " + response + " .")
