#2.8 杨辉三角
'''
问题描述

杨辉三角形又称Pascal三角形，它的第i+1行是(a+b)i的展开式的系数。

它的一个重要性质是：三角形中的每个数字等于它两肩上的数字相加。

下面给出了杨辉三角形的前4行：
1

1 1

1 2 1

1 3 3 1

给出n，输出它的前n行。
输入格式

输入包含一个数n。
输出格式
输出杨辉三角形的前n行。每一行从这一行的第一个数开始依次输出，中间使用一个空格分隔。请不要在前面输出多余的空格。
样例输入
4
样例输出
1
1 1
1 2 1
1 3 3 1
数据规模与约定
1 <= n <= 34。
'''
#思路：第几行就有几个数字；能用递归
# 现在不知道自己哪里错了，只能理解别人好的代码
'''
def yanghui_sanjiao(n):

        arr = [1 for i in range(n)]
        
    
        for i in range(n-2):
            arr2 = yanghui_sanjiao(n-1)
            arr[i+1] = arr2[i] + arr2[i+1]
        # print(arr)
        for i in arr:
            print(i, end=' ')
        print()
        return arr


n = int(input())
yanghui_sanjiao(n)
'''
n = int(input())
yanghui_san = []
for i in range(n):
    yanghui_san.append([1 for j in range(i+1)])
    

for i in range(1, n):
    for j in range(1, i):#第i+1行，有i+1个数，倒数第二个数的序号是i-1,所以右边是i
        yanghui_san[i][j] = yanghui_san[i-1][j-1] + yanghui_san[i-1][j]
        
for i in range(n):
    for j in range(i+1):
        print(yanghui_san[i][j], end=' ')
    print()