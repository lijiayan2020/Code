# -*- coding: utf-8 -*-
"""
Created on Sun Jul 19 23:19:30 2020

@author: lijiayan
"""

import pandas as pd
catering_sale = 'D:\\Book\\Data\\Data\\chapter3\\demo\\data\\caterig_sale.xls'
data = pd.read_excel(catering_sale, index_col="日期")

print(data.describe())