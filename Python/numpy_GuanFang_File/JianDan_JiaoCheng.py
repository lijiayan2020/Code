# -*- coding: utf-8 -*-
"""
Created on Fri Feb  5 14:23:46 2021

@author: lijiayan
"""
import numpy as np

# 1D Array
a = np.array([0, 1, 2, 3, 4, 5])
b = np.array((0, 1, 2, 3, 4, 5))
c = np.arange(5)
d = np.linspace(0, 2*np.pi, 5)
#np.linspace() 在指定的间隔内返回均匀间隔的数字。
print(a)
print(b)
print(c)
print(d)

#MD Array
a1 = np.array([[11, 12, 13, 14, 15],
              [16, 17, 18, 19, 20],
              [21, 22, 23, 24, 25],
              [26, 27, 28, 29, 30],
              [31, 32, 33, 34, 35]])

#多维数组切片
print(a1[0,1:4])
print(a1[1:4, 0])
print(a1[::2,::2])#以2为间隔来切片，所以切到的是1，3，5行和列
print(a1[:, 1])#提取第二列
  
#数组属性
a = np.array([[11, 12, 13, 14, 15],
              [16, 17, 18, 19, 20],
              [21, 22, 23, 24, 25],
              [26, 27, 28, 29, 30],
              [31, 32, 33, 34, 35]])
print(type(a))
print(a.dtype)
print(a.size)
print(a.shape)
print(a.itemsize)
print(a.ndim)#数组维数
print(a.nbytes)

#使用数组
##基本操作符
a  =  np.arange(25)
a = a.reshape((5,5))

b = np.array([10, 62, 1, 14, 2, 56, 79, 2, 1, 45,
              4, 92, 5, 55, 63, 43, 35, 6, 53, 24,
              56, 3, 56, 44, 78])
b = b.reshape((5,5,))

print(a + b)
print(a - b)
print(a * b)
print(a / b)
print(a ** 2)
print(a < b) 
print(a > b)

print(a.dot(b))#dot() 函数计算两个数组的点积。它返回的是一个标量


#数组特殊运算符
#dot, sum, min, max, cumsum
a = np.arange(10)
print(a.sum())
print(a.min())#0
print(a.max())#9
print(a.cumsum())#将第一个元素和第二个元素相加，并将计算结果存储在一个列表中，然后将该结果添加到第三个元素中

#索引进阶
##花式索引
a = np.arange(0, 100, 10)
indices = [1, 5, -1]
b = a[indices]#提取a中第2、6个和倒数第一个
print(a)
print(b)

##布尔屏蔽
import matplotlib.pyplot as plt

a = np.linspace(0, 2 * np.pi, 50)
b = np.sin(a)
plt.plot(a,b) 
mask = b >= 0
plt.plot(a[mask], b[mask],'bo' )
mask = (b >= 0) & (a <= np.pi / 2)
plt.plot(a[mask], b[mask], 'go')
plt.show()

##缺省索引（不完全索引）
a = np.arange(1, 100, 10)
b = a[:5]
c = a[a >= 50]
print(b)
print(c)

##Where函数
a = np.arange(0, 100, 10)
b = np.where(a < 50)
c = np.where(a >= 50)[0]
print(b)
print(c)  












