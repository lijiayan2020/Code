def findSmallest(arr):
    smallest = arr[0]
    smallest_index = 0
    for i in range(1, len(arr)):
        if arr[i] < smallest:
            smallest = arr[i]
            smallest_index = i
    return smallest_index

def selectionSort(arr):
    NewArr = []
    for i in range(len(arr)):
        smallest_index = findSmallest(arr)
        NewArr.append(arr.pop(smallest_index))
    return NewArr    
print(selectionSort([5, 4, 0, 1, -1]))