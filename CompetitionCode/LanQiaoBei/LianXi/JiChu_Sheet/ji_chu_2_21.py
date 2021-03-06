#2.21 芯片测试
'''
问题描述
　　有n（2≤n≤20）块芯片，有好有坏，已知好芯片比坏芯片多。
　　每个芯片都能用来测试其他芯片。用好芯片测试其他芯片时，能正确给出被测试芯片是好还是坏。
而用坏芯片测试其他芯片时，会随机给出好或是坏的测试结果（即此结果与被测试芯片实际的好坏无关）。
　　给出所有芯片的测试结果，问哪些芯片是好芯片。
输入格式
　　输入数据第一行为一个整数n，表示芯片个数。
　　第二行到第n+1行为n*n的一张表，每行n个数据。
表中的每个数据为0或1，
在这n行中的第i行第j列（1≤i, j≤n）的数据表示用第i块芯片测试第j块芯片时得到的测试结果，
1表示好，0表示坏，i=j时一律为1
（并不表示该芯片对本身的测试结果。芯片不能对本身进行测试）。
输出格式
　　按从小到大的顺序输出所有好芯片的编号
样例输入
3
1 0 1
0 1 0
1 0 1
样例输出
1 3
'''
n = int(input())
matrix = [[] for _ in range(n)]
for i in range(n):
    arr = input().split()
    for j in range(n):
        matrix[i].append(int(arr[j]))
right = [None]*n

for i in range(n):
    right[i] = 1
    for j in range(n):
        if matrix[0][j] == 0:
            right[j] = 0
        else:
            right[j] = 1
            if matrix[j][i] == 0:
                right[i] = 0
for i in range(n):
    if right[i] == 1:
        print(i+1, end=" ")
# 题解(为什么运行不出来！！！)
#利用好芯片比坏芯片多
n = int(input())      
matrix = [[] for _ in range(n)]
right = [True for _ in range(n)]

for i in range(n):
    arr = input().split()
    for j in range(n):
        matrix[i].append(int(arr[j]))
for i in range(n):
    count = 0
    for j in range(n):
        if matrix[j][i] == 1: TODO:#为什么[i][j]就是错的？？
            count += 1
    if count <= n/2:
        right[i] = False
for i in range(n):
    if right[i]:
        print(i+1, end=" ")

