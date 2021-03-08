#2.24 数的读法
'''
问题描述
　　Tom教授正在给研究生讲授一门关于基因的课程，有一件事情让他颇为头疼：一条染色体上有成千上万个碱基对，它们从0开始编号，到几百万，几千万，甚至上亿。
　　比如说，在对学生讲解第1234567009号位置上的碱基时，光看着数字是很难准确的念出来的。
　　所以，他迫切地需要一个系统，然后当他输入12 3456 7009时，会给出相应的念法：
　　十二亿三千四百五十六万七千零九
　　用汉语拼音表示为
　　shi er yi san qian si bai wu shi liu wan qi qian ling jiu
　　这样他只需要照着念就可以了。
　　你的任务是帮他设计这样一个系统：给定一个阿拉伯数字串，你帮他按照中文读写的规范转为汉语拼音字串，相邻的两个音节用一个空格符格开。
　　注意必须严格按照规范，比如说“10010”读作“yi wan ling yi shi”
而不是“yi wan ling shi”，“100000”读作“shi wan”而不是“yi shi wan”，
“2000”读作“er qian”而不是“liang qian”。
输入格式
　　有一个数字串，数值大小不超过2,000,000,000。
输出格式
　　是一个由小写英文字母，逗号和空格组成的字符串，表示该数的英文读法。
样例输入
1234567009
样例输出
shi er yi san qian si bai wu shi liu wan qi qian ling jiu
'''
num = {0:"ling", 1:"yi", 2:"er", 3:"san", 4:"si", 5:"wu",
    6:"liu", 7:"qi",8:"ba", 9:"jiu", 10:"shi"}
arr = input()
arr = str(int(arr))
#TODO:将字符串分解成亿，万，千分别读，判断这其中有几个0
length = len(arr)#位数
arr1 = arr[-4::]#提取后四位
arr2 = arr[-8:-4:1]#从千万到万

# print(arr3)

if length >= 9:#亿
    arr3 = arr[-10:-8:1]#十亿到亿
    a3 = int(arr3)
    if len(arr3)>=2:
        
        shi_yi = int(a3//10)
        ge_yi = a3%10
        if ge_yi!=0:#不是整十亿
            if shi_yi!=1:
                print(num[shi_yi] + " shi " + num[ge_yi] + " yi ", end="")
            else:
                print("shi " + num[ge_yi] + " yi ", end="")
        else:
            if shi_yi!=1:
                print(num[shi_yi] + " shi " + " yi ", end="")
            else:
                print("shi yi ", end="")    
    else:
        print(num[a3] + " yi ", end="")
if length >=5:#万
    #如果万上和千上的都是零，直接不输出，如果千上不为零，万位全是零，输出ling。
    flag2 = 0

    for i in arr2:
        if i != "0":
            flag2 = 1

    # if flag1!=0 and flag2==0:
    #     print("ling ", end="")
    
    if len(arr2)>=4:
        if arr2[-4] != "0": 
            print(num[int(arr2[-4])] + " qian ", end="")
        else:
            if length>=9:
                print("ling ", end="")
    if len(arr2)>=3:
        if arr2[-3] != "0": 
            print(num[int(arr2[-3])] + " bai ", end="")
        else:
            if arr2[-4]!="0":
                print("ling ", end="")
    if len(arr2)>=2:
        if arr2[-2] != "0":
            if arr2[-2]!="1":
                print(num[int(arr2[-2])] + " shi ", end="")
            else:
                print("shi ", end="")
        else:
            if arr2[-3]!="0":
                print("ling ", end="")
    if len(arr2)>=1:
        if arr2[-1] != "0":
            print(num[int(arr2[-1])], end="")
    if flag2==1: 
        print(" wan ", end="")
if length>=1:
    flag1 = 0
    for i in arr1[::-1]:
        if i == "0":
            flag1 += 1
        else:
            break

    if len(arr1)>=4:
        if arr1[-4] != "0":
            print(num[int(arr1[-4])] + " qian ", end="")
        else:
            if length>=5 and flag1!=4:
                print("ling ", end="")
    if len(arr1)>=3:
        if arr1[-3] != "0":
            print(num[int(arr1[-3])] + " bai ", end="")
        else:
            if arr1[-4]!="0" and flag1!=3:
                print("ling ", end="")
    if len(arr1)>=2:
        if arr1[-2] != "0":
            if arr1[-2]!="1":
                print(num[int(arr1[-2])] + " shi ", end="")
            else:
                
                print("yi shi ", end="")
        else:
            if arr1[-3]!="0" and flag1!=2:
                print("ling ", end="")
    if len(arr1)>=1:
        if arr1[-1] != "0":
            print(num[int(arr1[-1])], end="")

