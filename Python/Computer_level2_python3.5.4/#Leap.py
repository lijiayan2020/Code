###闰年
##y=eval(input("请输入年份："))
##try:
##    if y%4==0 and y%100!=0:
##        print("闰年")
##    elif y%400==0:
##        print("闰年")
##except:
##    print("请输入数字！")

###最大公约数
##n1=eval(input("第一关整数："))
##n2=eval(input("第二个整数："))
##a=n1
##b=n2
##if n1<n2:
##    n3=n1
##    n1=n2
##    n2=n3
##while True:
##    n4=n1%n2
##    n1=n2
##    n2=n4
##    if n4==0:
##        break
##print("最小公倍数是：{}".format(a*b/n1))




#统计不同字符的个数
str = input("请输入一段文字：")
str=str.lower()
a=b=c=d=0
for i in range(len(str)):
    if str[i]>="a" and str[i]<="z":
        a=a+1
    elif 0x4E00 <= ord(str[i]) <= 0x9FA5:
        a=a+1
    elif 0x0030 <= ord(str[i]) <= 0x0039:
        b=b+1
                       
    elif str[i]==" ":
        c=c+1
    else:
        d=d+1
print(a,b,c,d)            
    
