'''
@Description: 
@version: 
@Author: LiJiayan
@Date: 2020-06-15 17:16:42
@LastEditors: LiJiayan
@LastEditTime: 2020-06-15 18:09:28
'''
import random
secretNumber = random.randint(1,20)
print("I get a secret number,please guess it.")
print("Now, I give you 6 times.")
for i in range(1,7):
    guessNumber = input("Your guess:")
    if guessNumber < secretNumber :
        print("lower!")
    elif guessNumber > secretNumber :
        print("Higher!")
    elif guessNumber == secretNumber :
        break
if guessNumber == secretNumber:
    print("Congratulation!")
else:
    print("Nope!")