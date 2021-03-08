#2.23 sin之舞
'''
问题描述
　　最近FJ为他的奶牛们开设了数学分析课，FJ知道若要学好这门课，必须有一个好的三角函数基本功。
所以他准备和奶牛们做一个“Sine之舞”的游戏，寓教于乐，提高奶牛们的计算能力。
　　不妨设
　　An=sin(1–sin(2+sin(3–sin(4+…sin(n))…)
　　Sn=(…(A1+n)A2+n-1)A3+…+2)An+1
　　FJ想让奶牛们计算Sn的值，请你帮助FJ打印出Sn的完整表达式，以方便奶牛们做题。
输入格式
　　仅有一个数：N<201。
输出格式
　　请输出相应的表达式Sn，以一个换行符结束。输出中不得含有多余的空格或换行、回车符。
样例输入
3
样例输出
((sin(1)+3)sin(1–sin(2))+2)sin(1–sin(2+sin(3)))+1
'''
'''
n = int(input())
arr = ''
def math_an(n):
    if n==1:
        return str(n) + ""sin(" + str(n) + ")" 
    if n%2 == 0:
        return str(n+1) + "+" + "(" + math_an(n+1) + ")"
    else:
        return  str(n+1) + "-" + "(" + math_an(n+1) + ")"
arr2 = ''
def math_sn(n):
    if n==0:
        return arr2
    arr2 = "(" + math_sn(n)
'''
#看了题解后


def an(n, sign=1):
    s = ''
    sin = "sin"
    for i in range(1, n+1):
        symbol = "+" if sign==1 else "-"
        s = s + symbol + sin + "(" + str(i)
        sign *= -1
    s += ")"*n
    return s[1:]
def sn(n):
    s2 = ""
    s2 += "("*(n-1)
    for i in range(n, 0, -1):
        s2 = s2 + an(n-i+1) + "+" + str(i) + ")"
    return s2[:-1]
n = int(input())
print(sn(n))