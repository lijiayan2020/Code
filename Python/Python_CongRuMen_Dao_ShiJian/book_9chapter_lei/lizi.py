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
#     def increment_odometer(self,miles):
#         if miles > 0:
#             self.odometer_reading += miles
#         else:
#             print("You can't roll back an odometer.")
# my_new_car = Car("audi","a4",2016)
# my_new_car.read_odometer()
# my_new_car.increment_odometer(-1)
# my_new_car.read_odometer()
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
#     def increment_odometer(self,miles):
#         if miles > 0:
#             self.odometer_reading += miles
#         else:
#             print("You can't roll back an odometer.")
#     def fill_gas_tank(self):
#         print("NEED")
# class ElectricCar(Car):
#     """电动汽车的独特之处"""
#     def __init__(self,make,model,year):
#         """
#         初始化父类的属性
#         再初始化电池的属性
#         """
#         super().__init__(make,model,year)
#         self.battery = Battery()
#     def fill_gas_tank(self):
#         """电动汽车没有油箱"""
#         print("This car doesn't need a gas tank!")
# class Battery():
#     def __init__(self,battery_size=70):
#         self.battery_size =battery_size
#     def describe_battery(self):
#         print("This car has a " + str(self.battery_size) + "-kwh battery")
#     def get_range(self):
#         if self.battery_size == 70:
#             range = 240
#         if self.battery_size ==85:
#             range = 270
#         message = "This car can go approximately " + str(range)
#         message += " miles on a full charge."
#         print(message)
# my_tesla = ElectricCar("tesla","model s",2016)
# print(my_tesla.get_descriptive_name())
# my_tesla.battery.describe_battery()
# my_tesla.fill_gas_tank()
# my_tesla.battery.get_range()
# from car import Car,ElectricCar #导入多个模块
# my_new_car = Car('audi','a4',2016)
# print(my_new_car.get_descriptive_name())
# my_new_car.odometer_reading = 23
# my_new_car.read_odometer()
# import car#导出整个模块
# my_beetle = car.Car('volkswagen', 'beetle', 2016) 
# print(my_beetle.get_descriptive_name())
# my_tesla = car.ElectricCar('tesla', 'roadster', 2016) 
# print(my_tesla.get_descriptive_name())
#from module_name import *#导入整个模块的类
