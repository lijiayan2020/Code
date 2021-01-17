

# -*- coding: utf-8 -*-
"""
Created on Mon Jun 22 22:11:08 2020

@author: lijiayan
"""

def pySum():
    a = [1,2,3,4]
    b = [2,3,4,5]
    # c = []
    d = []
    for i in range(len(a)):
        # c.insert(-1,a[i]**2+b[i]**3)
        d.append(a[i]**2+b[i]**3)
    return d  # return d
print(pySum())


import numpy as np


def npSum():
    a = np.array([1, 2, 3, 4])
    b = np.array([2, 3, 4, 5])
    c = a**2 + b**3
    return c


print(npSum())

# numpy数组的创建和变换
x = np.array([1, 2, 3, 4])
x = np.array([1, 2, 3, 4], dtype=np.float32)

a = np.ones((2, 3, 4), dtype=np.int32)
#map
a = [1, 2, 3]
b = map(lambda  x:x+2, a)
# print(b)
b =list(b)
print(b)
#reduce
from functools import reduce
a = reduce(lambda x,y: x*y,range(1,6))
print(a)
# filter
b = filter(lambda x:x>5 and x<8,range(10))
b = list(b)
print(b)
b = [i for i in range(10) if i>5 and i<8]
#math库
import math as m
a = m.sin(1)
print(a)
from math import exp as e
a = e(1)
print(a)
from math import *
exp(1)
sin(1)

