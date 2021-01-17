# -*- coding: utf-8 -*-
"""
Created on Sat Sep 12 22:05:16 2020

@author: lijiayan
"""

import numpy as np
import matplotlib.pyplot as plt

h = 0.001#空间步长
N = 25#空间步数
dt = 0.0001#时间步长
M = 25000#时间的步数
A = (113.61*dt)/(h**2) #lambda*tau/h^2
U = np.zeros([N+1,M+1])#建立二维空数组
Space = np.arange(0,(N+1)*h,h)#建立空间等差数列，从0到0.0015，公差是h

#边界条件
for k in np.arange(0,M+1):
    U[0,k] = 25
    U[N,k] = 25

#初始条件
for i in np.arange(0,N):
    U[i,0]=0

#递推关系
for k in np.arange(0,M):
    for i in np.arange(1,N):
        U[i,k+1]=A*U[i+1,k]+(1-2*A)*U[i,k]+A*U[i-1,k]