###英文字符统计
##n = input("请输入一段英文：")
##n = n.lower()
##counts ={}
##for character in n:
##    if 97 <=ord(character) <=122:
##        counts[character] = counts.get(character,0) + 1
##    else:
##        continue
##characters = list(counts.items())
##sorted_characters = sorted(characters,key=lambda x:x[1],reverse=True)
##for i in range(len(sorted_characters)):
##    cha,count = sorted_characters[i]
##    print("{:<10}{:>10}".format(cha,count))
###中文字符频率统计
##n = input("请输入一段中文：")
##counts={}
##for character in n:
##    if 0x4E00<=ord(character)<=0x9FA5:
##        counts[character] = counts.get(character,0) + 1
##    else:
##        continue
##characters = list(counts.items())
##sorted_characters=sorted(characters,key=lambda x:x[1],reverse=True)
##for i in range(len(sorted_characters)):
##    cha,count=characters[i]
##    print("{:<10}{:>10}".format(cha,count))
###随机密码生成
##import string
##from random import *
##resource = string.digits + string.ascii_letters
##password = []
##for i in range(10):
##    for j in range(8):
##        n = randint(0,len(resource)-1)
##        password.append(resource[n])
##    else:
##        print(''.join(password))
##    password.clear()
##    
###重复元素判定
##def func(lis):
##    s=str(lis)
##    
##    for i in range(len(lis)):
##        if s.count(lis[i])!=1:
##            return True
##s = input("请输入一段文字：")
##print(func(list(s)))
#重复元素判定
##def func(ch):
##    sh = set(ch)
##    if len(sh)!=len(ch):
##        return True
##line=list(input("请输入一段文字："))
##print(func(line))
##            



























        
    
