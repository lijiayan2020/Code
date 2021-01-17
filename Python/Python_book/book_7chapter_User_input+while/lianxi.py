# car = input("Tell me car name which you want to rent :")
# print("Let me see if I can find you a " + car.title())
# number = input("how many people :")
# number = int(number)
# if number >8:
#     print("We have not enough seats.")
# else:
#     print("We have enough seats.")
# number = input("Please enter a number,and I will tell you something")
# number = int(number)
# if number%10 ==0:
#     print("It's divisible by 10.")
# else:
#     print("It is not divisible by 10.")
# prompt = '\nPlease enter pizza toppings.'
# prompt += '\n(Enter "quit" to end. )'
# while True:
#     message = input(prompt)
#     if message != 'quit':
#         print("We will enter " + message + " in pizza.")
#     else:
#         break
#prompt = "\nPlease enter your age."
# prompt += "\n(Enter 'quit' to end.)"
# active = True
# while active:
#     message = input(prompt)
#     if message == 'quit':
#         active = False
#         continue
#     message = int(message)
#     if message < 3:
#         print("Free")
#     if message >= 3 and message <= 12:
#         print("Your cost is $10.")
#     if message > 12:
#         print("Your cost is $15.")
#sandwich_orders = ['LI','pastrami','pastrami','Zui','Qia','pastrami']
# finished_sandwich = []
# while sandwich_orders:
#     finish = sandwich_orders.pop()
#     finished_sandwich.append(finish)
#     print("I made your " + finish + "sandwich!")
# print(finished_sandwich)
#print("熟肉店的五香烟熏牛肉卖完了")
#while 'pastrami' in sandwich_orders:
    #sandwich_orders.remove("pastrami")
#print(sandwich_orders)
#梦想的度假胜地
# places = {}
# while True:
#     name = input("What is your name?")
#     place = input("If you wpuld visit one place in the world,where would you go?")
#     places[name] = place
#     answer = input("Another?(yes or no)")
#     if answer == 'no':
#         break
# print("\n---Result---")
# for name, place in places.items():
#     print(name + " like to go " + place + ".")
