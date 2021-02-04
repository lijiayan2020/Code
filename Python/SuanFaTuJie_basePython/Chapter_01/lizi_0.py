"""
猜数字
"""
def binary_search(list, item):
    low = 0
    high = len(list) - 1
    
    while low <= high:
        mid = (low + high)//2 #我们得知道查找一个具体的列表位置得用一个整数，如果你用“/”得到的数会出现小数
        guess = list[mid]
        if guess == item:
            return mid
        if guess > item:
            high = mid - 1
        else:
            low = mid + 1
    return None

example_list = [1, 3, 5, 7, 9]

print(binary_search(example_list, 3))
print(binary_search(example_list, -1))         
        
