

# -*- coding: utf-8 -*-
"""
Created on Mon Jun 22 22:11:08 2020

@author: lijiayan
"""

# def pySum():
#     a = [1,2,3,4]
#     b = [2,3,4,5]
#     c = []
#     d = []
#     for i in range(len(a)):
#         # c.insert(-1,a[i]**2+b[i]**3)
#         d.append(a[i]**2+b[i]**3)
#     return d  # return d
# print(pySum())


import numpy as np


def npSum():
    a = np.array([1, 2, 3, 4])
    b = np.array([2, 3, 4, 5])
    c = a**2 + b**3
    return c


print(npSum())

# numpy数组的创建和变换
x = np.array([1, 2, 3, 4])
x = np.array([1, 2, 3, 4],dtype=np.float32)

a = np.ones((2,3,4),dtype=np.int32)
