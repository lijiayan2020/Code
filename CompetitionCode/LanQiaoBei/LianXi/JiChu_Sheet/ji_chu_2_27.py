#2.27 矩阵乘法
'''
问题描述
　　给定一个N阶矩阵A，输出A的M次幂（M是非负整数）
　　例如：
　　A =
　　1 2
　　3 4
　　A的2次幂
　　7 10
　　15 22
输入格式
　　第一行是一个正整数N、M（1<=N<=30, 0<=M<=5），表示矩阵A的阶数和要求的幂数
　　接下来N行，每行N个绝对值不超过10的非负整数，描述矩阵A的值
输出格式
　　输出共N行，每行N个整数，表示A的M次幂所对应的矩阵。相邻的数之间用一个空格隔开
样例输入
2 2
1 2
3 4
样例输出
7 10
15 22
'''
# n, m = map(int, input().split())
# mt = [[] for _ in range(n)]
# for i in range(n):
#     arr = input().split()

# new_mt = mt
# print(new_mt)
# temp = new_mt
# print(temp)
# for x in range(n):
#     for i in range(n):
#         for j in range(n):
#             for t in range(n):
#                 new_mt[i][j] += temp[i][t]*mt[t][j]
#     temp = new_mt

# # for i in range(n):
# #     for j in range(n):
#         # print(new_mt[i][j], end="")
#     # print()
def multi_mt(new_mt, mt, n):
    '''矩阵乘法
    :param new_mt: 上次相乘的结果
    :param mt: 矩阵
    :param n: n*n阶
    '''
    last_mt = [[0 for _ in range(n)] for _ in range(n)]
    for i in range(n):
        for j in range(n):
            for k in range(n):
                last_mt[i][j] += new_mt[i][k] * mt[k][j]
    return last_mt


n, m = map(int, input().split())
mt = [[] for _ in range(n)]#输入的矩阵

for i in range(n):
    arr = input().split()
    for j in range(n):
        mt[i].append(int(arr[j]))

new_mt = mt #作为每次相乘后的结果

if m == 0:#零次幂，单位矩阵
    for i in range(n):
        for j in range(n):
            mt[i][j] = 1;
else:
    for i in range(m - 1):#这里要少一
        new_mt = multi_mt(new_mt, mt, n)

for i in range(n):#矩阵输出
    for j in range(n):
        print(new_mt[i][j], end=" ")
    print()
