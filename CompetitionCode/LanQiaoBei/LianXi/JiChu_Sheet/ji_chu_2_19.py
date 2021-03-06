#2.19 回形取数
'''
问题描述
　　回形取数就是沿矩阵的边取数，若当前方向上无数可取或已经取过，则左转90度。一开始位于矩阵左上角，方向向下。
输入格式
　　输入第一行是两个不超过200的正整数m, n，表示矩阵的行和列。接下来m行每行n个整数，表示这个矩阵。
输出格式
　　输出只有一行，共m*n个数，为输入矩阵回形取数得到的结果。数之间用一个空格分隔，行末不要有多余的空格。
样例输入
3 3
1 2 3
4 5 6
7 8 9
样例输出
1 4 7 8 9 6 3 2 5
样例输入
3 2
1 2
3 4
5 6
样例输出
1 3 5 6 4 2
'''
#my error,我做不出来
'''
n, m = map(int, input().split())#输入行列数
rec = [[None]*n]*m#定义矩阵
for i in range(n):#输入矩阵
    for j in range(m):
        rec[i][j] = int(input())

while n!=0 and m!=0:
'''
#看完题解之后
n, m = map(int, input().split())
matrix = [[] for _ in range(n)]
row = col = 0 #row-行，col-列
count = 0 # 总数
#输入
for i in range(n):
    arr = input().split()
    for j in range(m):
        matrix[i].append(int(arr[j]))
while count < n*m:
    while row<n and matrix[row][col] != -1:#向下走
        print(matrix[row][col], end=' ')
        matrix[row][col] = -1
        row += 1
        count += 1
    row -= 1
    col += 1
    while  col<m and matrix[row][col] != -1: #向右走
        print(matrix[row][col], end=' ')
        matrix[row][col] = -1
        col += 1
        count += 1
    row -= 1
    col -= 1
    while row>=0 and matrix[row][col] != -1: #向上走
        print(matrix[row][col], end=' ')
        matrix[row][col] = -1
        row -= 1
        count += 1
    row += 1
    col -= 1
    while col>=0 and matrix[row][col] != -1: #向左走
        print(matrix[row][col], end=' ')
        matrix[row][col] = -1
        col -= 1
        count += 1
    row += 1
    col += 1