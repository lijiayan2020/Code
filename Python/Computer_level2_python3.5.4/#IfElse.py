#IfElse.py
#if,else的简单表达
s = eval(input("请输入一个整数："))
token="" if s%3==0 and s%5==0 else "不"
print("这个数字{}能够被15整除".format(token))
