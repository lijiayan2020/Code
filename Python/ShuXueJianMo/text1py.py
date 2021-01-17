# -*- coding: utf-8 -*-
"""
Created on Tue Aug  4 23:55:41 2020

@author: lijiayan
"""
from text0 import LP
import LP
import sys
if _name_ == '_main_':
    m = sys.argv[1]
    clist = list(eval(sys.argv[2]))
    Alist = list(eval(sys.argv[3]))
    blist = list(eval(sys.argv[4]))
    Aeqlist = list(eval(sys.argv[5]))
    beqlist = list(eval(sys.argv[6]))
    all_x = tuple(eval(sys.argv[7]))
r = LP.LP(m=m,clist=clist,Alist=Alist,blist=blist,Aeqlist=Aeqlist,beqlist=beqlist,all_x=all_x)
print(r)