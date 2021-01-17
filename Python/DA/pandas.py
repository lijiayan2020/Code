# -*- coding: utf-8 -*-
"""
Created on Sun Jul 19 09:57:13 2020

@author: lijiayan
"""

# pandas
import numpy as np
import pandas as pd
s = pd.Series([1, 2, 3],index=['a', 'b', 'c'])
d = pd.DataFrame([[1, 2, 3],[4, 5, 6]],columns=['a', 'b', 'c'])
d2 = pd.DataFrame(s)
print(d.head())
d.describe()