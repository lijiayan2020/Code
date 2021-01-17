###TryExcept.py
##try:
##    n = eval(input("请输入一个数字："))
##    print("输入数字的3次方值为：",n**3)
##except:
##    print("输入错误，请输入一个数字！")
###ZeroDivisionError
try:
    for i in range(5):
        print(10/i,end="")
except ZeroDivisionError:
    print("除数为零，产生了除零错误！")
except:
    print("某种原因，出错了！")
 
