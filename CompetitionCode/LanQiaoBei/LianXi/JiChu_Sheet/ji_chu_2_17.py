#2.17 N皇后问题
'''
要在n*n的国际象棋棋盘中放n个皇后，
使任意两个皇后都不能互相吃掉。
规则：皇后能吃掉同一行、同一列、同一对角线的任意棋子。
求所有的解。n=8就是著名的八皇后问题了。
'''
#看完题解后写下来
def Queen(A, line=0):
    if line==len(A):
        print(A)
        return 0
    for i in range(len(A)):
        A[line] ,flag = i, True
        for j in range(line):
            if A[line]==A[j] or abs(line-j)==abs(A[line]-A[j]):
                flag = False
        if flag:
            Queen(A, line+1)
n = int(input())
A = [None]*n
Queen(A)   
A =[None]*8
# print(A)#[None, None, None, None, None, None, None, None]