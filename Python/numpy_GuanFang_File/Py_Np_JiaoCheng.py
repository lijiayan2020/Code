# # -*- coding: utf-8 -*-
# """
# Created on Sat Feb  6 11:35:59 2021

# @author: lijiayan
# """

# #Python
# ##快速排序算法示例
# def quicksort(arr):
#     if len(arr) <= 1:
#         return arr
#     pivot = arr[len(arr)//2]
#     left = [x for x in arr if x < pivot]
#     middle = [x for x in arr if x == pivot]
#     right =  [x for x in arr if x > pivot]
#     return quicksort(left) + middle + quicksort(right)

# print(quicksort([3, 6, 8, 10 ,1, 2, 1]))

# #Strings-error(无法实现)
# #hw = '&s %s %d' % (hello, world, 12)
# #print(hw) 

# s = "hello"
# print(s.capitalize())
# print(s.upper())
# print(s.rjust(7))
# print(s.center(7))
# print(s.replace('l', '(ell)'))
# print(' world'.strip())#跳过前面和后面的空格

# # 列表
# xs = [3, 1, 2]
# print(xs, xs[2])
# print(xs[-1])
# xs[2] = "foo"
# print(xs)
# # xs.append("bar")
# print(xs)
# xs.pop()
# print(xs)

# # 切片 Slicing
# nums = list(range(5))
# print(nums)
# print(nums[2:4])
# print(nums[2:])
# print(nums[:2])
# print(nums[:])
# print(nums[:-1])#不包括右边界
# nums[2:4] = [8, 9]
# print(nums)

# animals = ['cat', "dog", "monkey"]
# for animal in animals:
#     print(animal)
    
# for idx, animal in enumerate(animals):
#     print("#%d: %s" % (idx + 1, animal))
    

# nums = [0, 1, 2, 3, 4]
# squares = []
# for x in nums:
#     squares.append(x ** 2)
# print(squares)

# even_squares = []
# for x in nums:
#     even_squares = [x ** 2 for x in nums if x % 2 ==0]
# print(even_squares)

# #字典
# d = {"cat": "cute", "dog": "furry"}
# print(d["cat"])
# print("cat" in d)
# d["fish"] = "wet"
# print(d["fish"])
# #print(d["monkey"]) 
# print(d.get("monkey", "N/A"))
# print(d.get("monkey", "N/A"))
# del d["fish"]
# print(d.get("fish", "N/A"))

# d = {"person": 2, "cat": 4, "spider": 8}
# for animal in d:
#     legs = d[animal]
#     print("A %s has %d legs" % (animal, legs))
    
# for animal , legs in d.items():
#     print("A %s has %d legs" % (animal,legs))

# nums = list(range(5))
# print(nums)
# even_num_to_square = {x: x ** 2 for x in nums if x % 2 == 0}
# print(even_num_to_square)

# #集合
# animals = {"cat", "dog"}
# print("cat" in animals)
# print("fish" in animals)
# animals.add("fish")
# print(len(animals))
# animals.add("cat")
# print(len(animals))#没有增加
# animals.remove("cat")
# print(len(animals))

# animals = {"cat", "dog", "fish"}
# for idx, animal in enumerate(animals):
#     print("#%d: %s" % (idx + 1, animal))

# from math import sqrt
# nums = {int(sqrt(x)) for x in range(30)}
# print(nums)
 
# #元组
# d = {(x, x + 1): x for x in range(10)}
# print(d)
# t = (5, 6)
# print(type(t))
# print(d[t])
# print(d[(1, 2)])

# #函数
# def sign(x):
#     if x > 0:
#         return "positive" 
#     elif x < 0:
#         return "negative"
#     else:
#         return "zero"
# for x in [-1, 0, 1]:
#      print(sign(x))

# def hello(name, loud=False):
#     if loud:
#         print("HELLO, %s" % (name.upper()))
#     else:
#         print("Hello %s" % (name))

# hello("Bob")
# hello("Fred", loud=True)

# #类
# class Greeter(object):
    
#     #Constructer
#     def __init__(self, name):
#         self.name = name
        
#     #Instance method
#     def greet(self, loud=False):
#         if loud:
#             print("HelLO, %s" % self.name.upper())
#         else:
#             print("Hello %s" % self.name)

# g = Greeter("Fred") 
# g.greet()
# g.greet(loud=True)

# #numpy 数组
# import numpy as np
# x = np.array([[1, 2],[3, 4]])
# print(np.sum(x, axis=0))#行相加
# print(np.sum(x, axis=1))#列相加
# #矩阵的转置
# print(x.T)

# #广播
# ##向矩阵每一行添加一个常数向量

# x = np.array([[1, 2, 3],[4, 5, 6],[7, 8, 9],[10, 11, 12]])
# v = np.array([1, 0, 1])
# y = np.empty_like(x)#一个和x一样形状的空矩阵
# for i in range(4):
#     y[i, : ] = x[i, :] + v

# print(y)


# #当矩阵x非常大的时候，在Python中计算显示循环会很慢

# vv = np.tile(v, (4, 1))
# y = x + vv
# print(y)

# #实际上
# y = x + v#实现了功能
# print(y)
# #x-(4,3),v-(3,),由于广播，该行工作方式就把v-(4,3)化了，每一行都是v的副本

# ##实际应用
# v = np.array([1, 2, 3])
# w = np.array([4, 5])
# print(np.reshape(v, (3,1)) * w)

# x = np.array([[1, 2, 3],[4, 5, 6]])
# v = np.array([1, 2, 3])
# print(x + v)#[[2 4 6] [5 7 9]]

# print(((x.T) + w).T)
# print(x + np.reshape(w, (2,1)))

# print(x * 2)

# Scipy

import imageio
imsave = imageio.imsave
from imageio import imread
# img = imread("images/cat.png")
# print(img.dtype, img.shape)

# img_tinted = img * [1, 0.9, 0.9]
# img_tinted = imresize(img_tinted, (400, 400))
# imsave("images/cat_tinted.png", img_tinted)

#matplotlib
import numpy as np
import matplotlib.pyplot as plt

x = np.arange(0, 3 * np.pi, 0.1)
y_sin = np.sin(x)
y_cos = np.cos(x)
plt.plot(x, y_sin)
plt.plot(x, y_cos)
# plt.xlabel("x axis label")
# plt.ylabel("y axis label")
# plt.title("Sine and Cosine")
# plt.legend(["Sine", "Cosine"])
# plt.show()


#子图
# plt.subplot(2, 1, 1)
# plt.plot(x, y_sin)
# plt.title("Sine")
# plt.subplot(2, 1, 2)
# plt.plot(x, y_cos)
# plt.title("Cosine")
# plt.show()


#图片
img = imread("images/cat.png")
img_tinted = img * [1, 0.95, 0.9]
plt.subplot(1, 2, 1)
plt.imshow(img)
plt.subplot(1, 2, 2)
plt.imshow(np.uint8(img_tinted))
plt.show()
