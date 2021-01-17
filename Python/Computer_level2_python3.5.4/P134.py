###字符在文件中出现的次数
##file = input("请输入你的文件:")
##ch=input("请输入字符：")
##f = open(file)
##s = f.read()
##count = 0
##for i in range(len(s)):
##    if ch == s[i]:
##        count= count+1
##print(count)


###大小写
##f = open("a.txt","r")
##s = f.read()
##result = ""
####for i in s:
####    if 65<=ord(i)<=90:
####        result+=i.lower()
####    else:
####        result+=i.upper()
##result=s.swapcase()
##print(result)
##
##            



##
###矩阵保存为文件
##from random import *
##matrix=""
##for x in range(10):
##    line=""
##    for y in range(10):
##        line+="{}".format(randint(0,9))
##    matrix+="{}\n".format(line)
###保存为文件
##f = open("Q3.txt","w")
##f.write(matrix)
##f.close()
###另存为CSV
##f = open("Q3.csv","w")
##new_matrix=matrix.replace(" ",",")
##f.write(new_matrix)
##f.close()
##
##
###
    
import keyword
keyword_list = keyword.kwlist
table = ["range","print","input","len","list","set"]
f = open("#CalRunTime.py","r",encoding='utf-8')
content=f.read()
f.close()
new=""
temp=""
for ch in content:
    if ch.isalpha():
        temp+=ch
    else:
        if(not keyword.iskeyword(temp)) and (temp not in table):
            temp = temp.upper()
        new+=temp
        new+=ch
        temp = ""
new_file = open("#CalRunTime.py","w")
new_file.write(new)
new_file.close()


































    
