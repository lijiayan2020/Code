# -*- coding: utf-8 -*-
"""
Created on Tue Aug  4 17:55:08 2020

@author: lijiayan
"""
from scipy import optimize
import numpy as np

'''
在matlab中的标准写法
# c = [2, 3, -5]
# A = [[-2, 5, -1],[1, 3, 1]]
# b = [-10, 12]
# Aeq = [[1, 1, 1]]
# beq = [7]
# x1 = (0, None)
# x2 = (0, None)
# x3 = (0, None)

'''
def LP(m='',clist=[],Alist=[],blist=[],Aeqlist=[],beqlist=[],all_x=()):
    c = np.array(clist)
    A = np.array(Alist)
    b = np.array(blist)
    Aeq = np.array(Aeqlist)
    beq = np.array(beqlist)
    #求解
    if m == 'min':
        res = optimize.linprog(c, A, b, beq, bounds=all_x)
        fun = res.fun
        x = res.x
    else:
        res = optimize.linprog(-c, A, b, Aeq, beq, bounds=all_x)
        fun = -(res.fun)
        x= res.x
    return fun,x
