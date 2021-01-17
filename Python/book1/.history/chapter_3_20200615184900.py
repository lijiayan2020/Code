'''
@Description: 
@version: 
@Author: LiJiayan
@Date: 2020-06-15 18:12:05
@LastEditors: LiJiayan
@LastEditTime: 2020-06-15 18:49:00
'''
# 1,为什么在程序中加入函数会有好处？
#####为了简化工作，提高效率
# 2， 函数中的代码何时执行：在函数被定义时，还是在函数被调用时？
####函数被调用时
# 3，什么语句创建一个函数？
##### def funcname(parameter_list):
# 4，一个函数和一次函数调用有什么区别？
####
# 5， Python程序中有多少全局作用域？有多少局部作用域？
#### 一个；很多个
# 6，当函数调用返回时，局部作用域中的变量发生了什么？
#### 不存在了
# 7，什么是返回值？返回值可以作为表达式的一部分吗？
#### 返回值需要给一个变量赋值，不能作为表达式的一部分
# 8，如果函数没有返回语句，对它调用的返回值是什么？
##### 返回值为0
# 9，如何强制函数中的一个变量指的是全局变量？
#### global ~~~
# 10， None的数据类型是什么？
#### NoneType数据类型
# 11. import areallyourpetsnamederic语句做了什么？
#### import了一个数据包
# 12，如果在名为spam的模块中，有一个名为bacon()的函数，在引入spam后，如何调用它？
#### spam.bacon()
# 13，如何防止程序在遇到错误时崩溃？
#### 使用try-except
# 14， try子句中发生了什么？ except子句中发生了什么？
#### 执行可执行的语句；如果有错误执行except

##实践项目


def collatz(number):
    
        if number%2==0:
            print(number//2)
        
            return number//2
            if number//2 == 1:
                    break
            

        elif number%2!=0:
            
            print(number*3+1)
            return number*3+1
            
            
number=int(input("Please enter a number"))
while True:
    re=collatz(number)
    if re == 1:
        break

