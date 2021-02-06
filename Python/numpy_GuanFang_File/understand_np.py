import numpy as np

my_array = np.array([1, 2, 3, 4, 5])
print(my_array)

print(my_array.shape)

my_new_array = np.zeros((5))
print(my_new_array) 

another_array = np.ones((5))
print(another_array)

my_random_array = np.random.random((5))
print(my_random_array)

my_2d_array = np.ones((2,4))
print(my_2d_array)

my_array = np.array([[4, 5], [6, 1]])
print(my_array)
print(my_array.shape)

my_array_column_1 = my_array[:, 1]
print(my_array_column_1)
my_newidea = my_array[0] #第一行
print(my_newidea)




#Numpy中的数组操作
a = np.array([[1.0, 2.0],[3.0, 4.0]])
b = np.array([[5.0, 6.0],[7.0, 8.0]])
sum = a + b
difference = a - b
product = a * b
quotient = a / b 
print("Sum = \n", sum)
print("Difference = \n", difference)
print("Product = \n", product)
print("Quotient = \n", quotient)

#矩阵乘法
matrix_prodact = a.dot(b)
print("Matrix Product = \n", matrix_prodact)
