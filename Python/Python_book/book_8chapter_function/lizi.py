# def  greet_user():
#     """显示简单的问候语"""
#     print("Hello!")
# greet_user()
# def greet_user(user_name):
#     """显示简单的问候语"""
#     print("Hello," + user_name + "!")
# greet_user("li")
# def  describe_pet(animal_type,pet_name):
#     """显示宠物信息"""
#     print("\nI have a " + animal_type + ".")
#     print("My " + animal_type + "'s name is " + pet_name.title() + ".")
# describe_pet("dog","momo")
# describe_pet(animal_type="dog",pet_name="momo")#使用关键字
#默认值
# def describe_pet(pet_name,animal_type='dog'):
#     print(animal_type)
# describe_pet(pet_name = 'momo')#默认值放在后面,未知量放在前面
# describe_pet('momo','cat')#默认值没有作用
#返回值
# def get_formatted_name(first_name,last_name):
#     """返回整洁的姓名"""
#     full_name = first_name + " " + last_name
#     return full_name.title()
# musician = get_formatted_name("jimi","hendrix")
# print(musician)
#中间名
# def get_formatted_name(first_name,last_name,middle_name = ""):
#     """返回整洁的姓名"""
#     if  middle_name:
#         full_name = first_name + " " +  middle_name + " " + last_name
#     else:
#         full_name = first_name + " " + last_name
#     return full_name.title()
# musician = get_formatted_name("jim",'hendrix')
# print(musician)
# musician = get_formatted_name("john",'hooker','lee')
#print(musician)
# def get_formatted_name(first_name, last_name, middle_name=''):     
#     """返回整洁的姓名"""    
#     if middle_name:       
#         full_name = first_name + ' ' + middle_name + ' ' + last_name 
#     else:
#         full_name = first_name + ' ' + last_name     
#     return full_name.title()
# musician = get_formatted_name('jimi', 'hendrix')
# print(musician)  
# musician = get_formatted_name('john', 'hooker', 'lee')
# print(musician)
# def build_name(first_name,last_name):
#     person = {'first':first_name,'last':last_name}
#     return person
# musician = build_name('jimi','hendrix')
# print(musician)
# def build_name(first_name,last_name,age = ''):
#     """返回一个字典，包括个人信息"""
#     person = {'first':first_name,'last':last_name}
#     if age:
#         person['age'] = age
#     return person
# musician = build_name('jimi','hendrix',age=27)
# print(musician)
# def get_formatted_name(first_name,last_name):
#     full_name = first_name + " " + last_name
#     return full_name
# while True:
#     print("Please tell me your name")
#     print("(Enter 'q' to end.)")
#     f_name = input("What is your first name?")
#     if f_name == 'q':
#         break
#     l_name = input("What is your last name?")
#     if l_name == 'q':
#         break
#     formatted_name = get_formatted_name(f_name,l_name)
#     print(formatted_name)
#传递列表

# def  greet_users(names):
#     """向列表中的每位用户发出简单的用户"""
#     for name in names:
#         msg = 'Hello, ' + name + " !"
#         print(msg)
# greet_users(names = ['1','23','24'])
#在函数中修改列表
# unprinted_designs = ['iphone case','robot pendant','dodecahedron']
# completed_models = []
# while unprinted_designs:
#     current_design = unprinted_designs.pop()
#     print("Printing model:" + current_design)
#     completed_models.append(current_design)
# print("The following models have been printed:")
# for completed_model in completed_models:
#     print(completed_model)
# def print_models(unprinted_designs,completed_models):
#     """
#     模拟打印每个设计，直到煤油未打印的设计为止
#     打印每个设计后，都将其移动到列表completed_models中
#     """
#     while unprinted_designs:
#         current_design = unprinted_designs.pop()
#         completed_models.append(current_design)
#         # 模拟根据设计制作3D打印模型的过程 
#         print("Printing model:" + current_design)
# def show_completed_models(completed_models):
#     """显示打印好的模型"""
#     print("\nThe following models have been printed.")
#     for completed_model in completed_models:
#         print(completed_model)
# unprinted_designs = ['iphone case','robot pendant','dodecahedron']
# completed_models = []
# print_models(unprinted_designs[:],completed_models)#传递副本
# show_completed_models(completed_models)
# print(unprinted_designs)
# def make_pizza(*toppings):
#     """概述要制作的披萨"""
#     print("\nMaking pizza with following toppings:")
#     for topping in toppings:
#         print(topping)
# make_pizza('pepperoni') 
# make_pizza('mushrooms', 'green peppers', 'extra cheese')
# def make_pizza(size,*toppings):
#     """概述要制作的披萨"""
#     print("\nMaking a " + str(size) + "-inch pizza with the following toppings" )
#     for topping in toppings:
#         print("-" + topping)
# make_pizza(13,'pepperoni') 
# make_pizza(16,'mushrooms','green peppers','extra cheese')
# 
# 指定别名的通用语法如下：
#from module_name import function_name as fn



#给模块指定别名的通用语法如下：
#import module_name as mn
#使用星号（* ）运算符可让Python导入模块中的所有函数：
#from module_name import *
#import 语句中的星号让Python将模块pizza 中的每个函数都复制到这个程序文件中。由于导入了每个函数，可通过名称来调用每个函数，而无需使用句点表示法。
# 然而，使用 并非自己编写的大型模块时，最好不要采用这种导入方法：如果模块中有函数的名称与你的项目中使用的名称相同，可能导致意想不到的结果：Python可能遇到多个名称相同的函 数或变量，进而覆盖函数，而不是分别导入所有的函数。
#最佳的做法是，要么只导入你需要使用的函数，要么导入整个模块并使用句点表示法。这能让代码更清晰，更容易阅读和理解
#函数编写指南
#应给函数指定描述性名称，且只在其中使用小写字母和下划线。
#阐述其功能的注释，该注释应紧跟在函数定义后面，并采用文档字符串格式
#给形参指定默认值时，等号两边不要有空格：对于函数调用中的关键字实参，也应遵循这种约定：
#所有的import 语句都应放在文件开头，唯一例外的情形是，在文件开头使用了注释来描述整个程序。
#如果程序或模块包含多个函数，可使用两个空行将相邻的函数分开，这样将更容易知道前一个函数在什么地方结束，下一个函数从什么地方开始。 

# class Dog():
#     """一次模拟小狗的简单尝试""" 
#     def __init__(self, name, age):          
#         """初始化属性name和age"""        
#         self.name = name          
#         self.age = age
#         #return self;   
#     def sit(self):          
#         """模拟小狗被命令时蹲下"""          
#         print(self.name.title() + " is now sitting.")      
#     def roll_over(self):          
#         """模拟小狗被命令时打滚"""         
#         print(self.name.title() + " rolled over!")

# class Dog():
#     def __init__(self,name,age):
#         self.name = name
#         self.age = age
#     def sit(self):#没有加self
#         print(self.name.title() + " is now sitting.")
#     def roll_over(self):#没有加self
#         print(self.name.title() + " rolled over.")
# my_dog = Dog('wille',6)
# print("My dog's name is " + my_dog.name.title()) 
# print("My dog's age is " + str(my_dog.age))
# my_dog.sit()
# my_dog.roll_over()
# class Car():
#     """模拟车的简述"""
#     def __init__(self,make,model,year):
#         """确定属性"""
#         self.make = make
#         self.model = model
#         self.year = year
#         self.odometer_reading = 0
#     def get_descriptive_name(self):
#         """得到长名字"""
#         long_name = self.make + " " + self.model + " " + str(self.year)
#         return long_name.title()
#     def read_odometer(self):
#         print("my car has " + str(self.odometer_reading) + " miles on it.")
# my_new_car = Car("audi","a4",2016)
# print(my_new_car.get_descriptive_name())
# my_new_car.read_odometer()
#修改属性的值（3种方法）
#1.直接修改属性的值
# my_new_car.odometer_reading = 23
# my_new_car.read_odometer()
#2.通过方法修改属性的值
# class Car():
#     """模拟车的简述"""
#     def __init__(self,make,model,year):
#         """确定属性"""
#         self.make = make
#         self.model = model
#         self.year = year
#         self.odometer_reading = 0
#     def get_descriptive_name(self):
#         """得到长名字"""
#         long_name = self.make + " " + self.model + " " + str(self.year)
#         return long_name.title()
#     def read_odometer(self):
#         print("my car has " + str(self.odometer_reading) + " miles on it.")
#     def update_odometer(self,mileage):
#         """将里程表的值设为指定值
#         禁止将里程表的值调回"""
#         if self.odometer_reading < mileage:
#             self.odometer_reading = mileage
#         else:
#             print("You can't roll back an odometer.")
# my_new_car = Car("audi","a4",2016)
# my_new_car.read_odometer()
# my_new_car.update_odometer(-1)
# my_new_car.read_odometer()
#通过方法将属性的值递增
class Car():
    """模拟车的简述"""
    def __init__(self,make,model,year):
        """确定属性"""
        self.make = make
        self.model = model
        self.year = year
        self.odometer_reading = 0
    def get_descriptive_name(self):
        """得到长名字"""
        long_name = self.make + " " + self.model + " " + str(self.year)
        return long_name.title()
    def read_odometer(self):
        print("my car has " + str(self.odometer_reading) + " miles on it.")
    def update_odometer(self,mileage):
        """将里程表的值设为指定值
        禁止将里程表的值调回"""
        if self.odometer_reading < mileage:
            self.odometer_reading = mileage
        else:
            print("You can't roll back an odometer.")
    def increment_odometer(self,miles):
        if miles > 0:
            self.odometer_reading += miles
        else:
            print("You can't roll back an odometer.")
my_new_car = Car("audi","a4",2016)
my_new_car.read_odometer()
my_new_car.increment_odometer(-1)
my_new_car.read_odometer()
#9-4 就餐人数 就餐人数 ：在为完成练习9-1而编写的程序中，添加一个名为number_served 的属性，并将其默认值设置为0。
#根据这个类创建一个名为restaurant 的实 例；打印有多少人在这家餐馆就餐过，然后修改这个值并再次打印它。