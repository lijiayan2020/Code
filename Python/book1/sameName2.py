'''
@Description: 
@version: 
@Author: LiJiayan
@Date: 2020-06-15 17:07:22
@LastEditors: LiJiayan
@LastEditTime: 2020-06-15 17:08:22
'''
def spam():
    global eggs
    eggs = "spam"
eggs = "global"
spam()
print(eggs)