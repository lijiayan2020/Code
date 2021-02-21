#2.7 水仙花数
'''
问题描述
　　153是一个非常特殊的数，它等于它的每位数字的立方和，即153=1*1*1+5*5*5+3*3*3。编程求所有满足这种条件的三位十进制数。
输出格式
　　按从小到大的顺序输出满足条件的三位十进制数，每个数占一行。
'''
import time
start = time.time()
def judge_shuixian(n):
    a = n % 10 #个位
    b = int(n%100 / 10) #十位
    c = int(n / 100)#注意：python中的除法会得到浮点数
    if  n == a**3 + b**3 + c**3:
        print(n)

for i in range(100, 1000):
    judge_shuixian(i)

end = time.time()
print(end-start)