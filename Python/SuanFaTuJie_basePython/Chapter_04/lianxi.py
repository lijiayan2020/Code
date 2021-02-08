#4.1
#使用递归解决上述问题

"""
#my solution but error!

def SumPlus(arr):
    
    
    if  arr == []:
        return arr[0]
    else:
        
        arr[0] += SumPlus(arr.pop(0))
        
print(SumPlus([1, 2, 3]))

#官方答案
def sum(list):
    if list == []:
        return 0
    return list[0] + sum(list[1:])
"""


#4.2 编写一个递归函数来计算列表包含的元素数。
'''
my error !
def count(arr):
    if arr == []:
        return len(arr[0])
    else:
        len(arr[0]) += count(arr.pop(0))

print(count([1, 2, 3]))

#官方
def count(list):
    if list == []:
        return 0
    else:
        return 1 + count(list[1:])
print(count([1, 2, 3]))
'''

#4.3 找出列表中最大的数字。
'''
!!! my error !!!
def FindMax(arr):
    if len(arr) == 1:
        return arr[0]
    else:
        if arr[0] < arr[1]:
            FindMax(arr.pop(0))
        else:
            FindMax(arr.pop(1))

print(FindMax([1, 2, 3]))

#官方
def max(list):
    if len(list) == 2:
        return list[0] if list[0] > list[1] else list[1]
    sub_max = max(list[1:])
    return list[0] if list[0] > sub_max else sub_max    
print(max([1, 2, 3]))        
'''

#4.4 还记得第1章介绍的二分查找吗？它也是一种分而治之算法。你能找出二分查找算法的基线条件和递归条件吗？
'''
my solution
基线条件：当不能再一分为二时
递归条件：target!=中间值

#官方
二分查找的基线条件是数组只包含一个元素。如果要查找的值与这个元素相同，就找到了！否则，就说明它不在数组中。
在二分查找的递归条件中，你把数组分成两半，将其中一半丢弃，并对另一半执行二分查找。
'''
#使用大O表示法时，下面各种操作都需要多长时间？-All right!!
'''
#4.5 打印数组中每个元素的值。
O(n)
#4.6 将数组中每个元素的值都乘以2。
O(n)
#4.7 只将数组中第一个元素的值乘以2。
O(1)
#4.8 根据数组包含的元素创建一个乘法表，即如果数组为[2, 3, 7, 8, 10]，首先将每个元素都乘以2，再将每个元素都乘以3，然后将每个元素都乘以7，以此类推。
O(n^2)
'''