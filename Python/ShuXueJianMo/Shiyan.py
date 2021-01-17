# -*- coding: utf-8 -*-
"""
Created on Wed Aug 12 12:00:44 2020

@author: lijiayan
"""

import matplotlib.pyplot as plt
import xlrd
from xlrd import open_workbook

x_data=[]
y_data=[]
x_volte=[]
temp=[]
wb = open_workbook('D:\Competition_File\2020数学建模国赛\Data.xls')

for s in wb.sheets():
    print('Sheet:',s.name)
    for row in range(s.nrows):
        #!print('the row is:',row)
        values = []
        for col in range(s.ncols):
            values.append(s.cell(row,col).value)
        #!print(values)
        x_data.append(values[0])
        y_data.append(values[1])    
plt.plot(x_data, y_data, 'bo-',label=u"Phase curve",linewidth=1)
plt.title(u"TR14 phase detector")
plt.legend()

plt.xlabel(u"input-deg")
plt.ylabel(u"output-V")

#plt.text(x_data,y_data,1)
plt.show()

print('over!')