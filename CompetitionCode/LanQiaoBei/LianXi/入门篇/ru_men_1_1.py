#1.1 Fibonacci数列题
'''
问题描述

Fibonacci数列的递推公式为：Fn=Fn-1+Fn-2，其中F1=F2=1。
当n比较大时，Fn也非常大，现在我们想知道，Fn除以10007的余数是多少。

输入描述

输入格式输入包含一个整数n。

输出描述

输出格式输出一行，包含一个整数，表示Fn除以10007的余数。
'''

#我的代码
n = int(input("Enter number 'n': "))
num = [1 for i in range(n+1)]
i = 3


while i <= n:
    num[n] = num[n-1] + num[n-2]
    i += 1
    
    

print(num[n] % 10007)

# 题解
'''
说明：在本题中，答案是要求Fn除以10007的余数，因此我们只要能算出这个余数即可，而不需要先计算出Fn的准确值，再将计算的结果除以10007取余数，直接计算余数往往比先算出原数再取余简单。
数据规模与约定1 <= n <= 1,000,000
'''

'''
n = int(input("Enter your number:"))
fn = [1 for i in range(n+1)] #因为数列最少需要三个数字，如果输入2，应该有f3
#fn列表里面包含n+1个1，装入计算后的取余后的数字
k = 3
while k<=n:#一共只有n+1个数，编号为0~n，而数列只取1~n,让其从1数起
    fn[k] = (fn[k-1] + fn[k-2]) % 10007
    k += 1

print(fn[n])
'''

#题解 先取余再递推防止超时
while True:
    try:
        n = int(input("Enter number:"))
        f1, f2 = 1, 1
        for i in range(3, n+1):
            f1, f2 = f2 % 10007, (f1 + f2) % 10007
        print(f2)
    except:
        break