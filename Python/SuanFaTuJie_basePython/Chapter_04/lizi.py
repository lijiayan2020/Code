#实现加法:
'''
def Sum(arr):
    total = 0
    for i in arr:
        total += i
    return total

print(Sum([1, 2, 3]))
'''
#快速排序-
# # 根本不用排序的数组(只有一个元素)
'''
def quicksort(arr):
    if len(arr) < 2:
        return arr
'''
#只有两个的数组
'''
def two_sort(arr):
    if arr[0] > arr[1]:
        arr[0], arr[1] = arr[1], arr[0]
    return arr
print(two_sort([2, 1]))
'''
#推广
def quicksort(arr):
    if len(arr) < 2:
        return arr
    else:
        pivot = arr[0]
        less = [i for i in arr[1:] if i <= pivot]
        greater = [i for i in arr[1:] if i > pivot]
        return quicksort(less) + [pivot] + quicksort(greater)
    
print(quicksort([2, 1, 4, -1]))