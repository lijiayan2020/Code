#2.29 分解质因数
'''
问题描述
　　求出区间[a,b]中所有整数的质因数分解。
输入格式
　　输入两个整数a，b。
输出格式
　　每行输出一个数的分解，形如k=a1a2a3…(a1<=a2<=a3…，
k也是从小到大的)(具体可看样例)
样例输入
3 10
样例输出
3=3
4=2*2
5=5
6=2*3
7=7
8=2*2*2
9=3*3
10=2*5
提示
　　先筛出所有素数，然后再分解。
数据规模和约定
　　2<=a<=b<=10000
'''
import math

def fen_jie(n,su_shu):
    for i in su_shu:
        if n % i == 0:
            return i

a, b = map(int, input().split())
result = dict()
su_shu = list()
for i in range(2,b+1):
    flag = 0
    for j in range(2,int(math.sqrt(i)+1)):
        if i % j == 0:
            flag = 1
    if flag == 0:
        su_shu.append(i)
for i in range(a,b+1):

    flag = 0
    for j in range(2,int(math.sqrt(i)+1)):
        if i % j == 0:
            flag = 1
    if flag == 0:#本身是素数，保存素数
        result[i] = str(i)
    else:
        number = list()
        temp = i
        while temp != 1:
            k = fen_jie(temp,su_shu)
            temp = temp // k
            number.append(str(k))
            number.append("*")
        number = [str(i) for i in number]
        number.pop()
        number = "".join(number)
        number = str(number)

        result[i] = number


for i in range(a, b+1):#输出
    if i in result.keys():
        print(str(i) + "=" + result[i])