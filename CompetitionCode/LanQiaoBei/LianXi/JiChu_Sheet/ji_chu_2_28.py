#2.28 2n皇后问题
'''
问题描述
　　给定一个n*n的棋盘，棋盘中有一些位置不能放皇后。
现在要向棋盘中放入n个黑皇后和n个白皇后，
使任意的两个黑皇后都不在同一行、同一列或同一条对角线上，
任意的两个白皇后都不在同一行、同一列或同一条对角线上。
问总共有多少种放法？n小于等于8。
输入格式
　　输入的第一行为一个整数n，表示棋盘的大小。
　　接下来n行，每行n个0或1的整数，

如果一个整数为1，表示对应的位置可以放皇后，
如果一个整数为0，表示对应的位置不可以放皇后。
输出格式
　　输出一个整数，表示总共有多少种放法。
样例输入
4
1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1
样例输出
2
样例输入
4
1 0 1 1
1 1 1 1
1 1 1 1
1 1 1 1
样例输出
0
'''
#我的
'''
global count


count = 0
def WQ(m):
    if m == n:
        BQ(0)
        return

    for i in range(n):
        if q[m][i] != 0:
            for j in range(m):
                if wq[j] != i and abs(j-m) != abs(wq[j]-i):
                    wq[m] = i
                    WQ(m+1)



def BQ(m):
    if m == n:
        count += 1
        return
    for i in range(n):
        if q[m][i] != 0 and q[m][i] != 2:
            for j in range(m):
                if bq[j] != i and abs(j-m) != abs(bq[j]-i) and i != wq[m]:
                    bq[m] = i
                    BQ(m+1)



n = int(input())
q = [[] for _ in range(n)] #能放不能放的矩阵
for i in range(n):
    arr = input().split()
    for j in range(n):
        q[i].append(int(arr[j]))

wq = bq = [0 for _ in range(n)] #白黑皇后所在位置

WQ(0)

print(count)
'''
#TODO:不懂k-1
def black_queen(k):
    
    global count

    for i in range(k - 1):
        judge = b_queen[i] - b_queen[k - 1]
        if judge == 0 or abs(k - 1 - i) == abs(judge):
            return

    if k == n:
        count += 1
        return

    for i in range(n):
        if i != w_queen[k] and chessboard[k][i] == 1:
            b_queen[k] = i
            black_queen(k + 1)


def white_queen(k):

    for i in range(k - 1):
        judge = w_queen[i] - w_queen[k - 1]
        if judge == 0 or abs(k - 1 - i) == abs(judge):
            return

    if k == n:
        black_queen(0)
        return

    for i in range(n):
        if chessboard[k][i] == 1:
            w_queen[k] = i
            white_queen(k + 1)


n = int(input())

count = 0

chessboard = [[] for _ in range(n)]

for i in range(n):
    arr = input().split()
    for j in range(n):
        chessboard[i].append(int(arr[j]))

w_queen = [0 for _ in range(n)]
b_queen = [0 for _ in range(n)]

white_queen(0)

print(count)