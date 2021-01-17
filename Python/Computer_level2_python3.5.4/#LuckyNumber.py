#LuckyNumber
import random
strl = input("请输入你的名字:")
print("Hello!{}".format(strl))
guard=ord(strl[0])%100
print("你的幸运数字是",random.choice(range(guard)))
