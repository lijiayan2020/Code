#2.1 数列排序
'''
问题描述
　　给定一个长度为n的数列，将这个数列按从小到大的顺序排列。1<=n<=200
输入格式
　　第一行为一个整数n。
　　第二行包含n个整数，为待排序的数，每个整数的绝对值小于10000。
输出格式
　　输出一行，按从小到大的顺序输出排序后的数列。
样例输入
5
8 3 6 4 9
样例输出
3 4 6 8 9
'''
# 我的分析：使用快速排序，基于递归
def quicksort(array):
    if len(array) < 2:
        return array
    else:
        pivot = array[0]
        less = [i for i in array[1:] if i < pivot]
        greater = [i for i in array[1:] if i > pivot]
        return quicksort(less) + [pivot] + quicksort(greater)
    
n = int(input())
array = list(map(int, input().split()))
array2 = quicksort(array)
for i in array2:
    print(i,end = ' ')
    
# 注意:输出是按照单个数字输出，不是以列表的形式，不能直接print(i),直接这样会换行输出。

#题解1
# 代码1
n = int(input())
arr = list(map(int, input().split()))
arr.sort()#list.sort(cmp=None, key=None, reverse=False)
# list.sort(reverse=True)降序，默认为升序
for i in range(n):
    print(arr[i], end=' ')
#注意：最后一个字符是换行，还是空格，考试的时候一定要仔细

