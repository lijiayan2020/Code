#9-1 餐馆 餐馆 ：创建一个名为Restaurant 的类，其方法__init__() 设置两个属性：restaurant_name 和cuisine_type 。创建一个名
#为describe_restaurant() 的方法和一个名为open_restaurant() 的方法，其中前者打印前述两项信息，而后者打印一条消息，指出餐馆正在营业。
# class Restaurant():
#     """餐馆"""
#     def __init__(self,restaurant_name,cuisine_type):
#         self.restaurant_name = restaurant_name
#         self.cuisine_type = cuisine_type
#     def describe_restaurant(self):
#         """餐馆信息"""
#         print("My restaurant's name is " + self.restaurant_name.title() + '.')
#         print("It has " + self.cuisine_type)
#     def open_restaurant(self):
#         """正在营业"""
#         print("My restaurant is open")
# my_restaurant = Restaurant("mm","l")
# my_restaurant.describe_restaurant()
#9-2 三家餐馆 三家餐馆 ：根据你为完成练习9-1而编写的类创建三个实例，并对每个实例调用方法describe_restaurant() 。
# class Restaurant():
#     """餐馆"""
#     def __init__(self,restaurant_name,cuisine_type):
#         self.restaurant_name = restaurant_name
#         self.cuisine_type = cuisine_type
#     def describe_restaurant(self):
#         """餐馆信息"""
#         print("My restaurant's name is " + self.restaurant_name.title() + '.')
#         print("It has " + self.cuisine_type)
#     def open_restaurant(self):
#         """正在营业"""
#         print("My restaurant is open")
# your_restaurant = Restaurant("LL","qwe")
# her_restaurant = Restaurant("ii","asd")
# your_restaurant.describe_restaurant()
# her_restaurant.describe_restaurant()
#9-3 用户 用户 ：创建一个名为User 的类，其中包含属性first_name 和last_name ，还有用户简介通常会存储的其他几个属性
#在类User 中定义一个名 为describe_user() 的方法，它打印用户信息摘要；再定义一个名为greet_user() 的方法，它向用户发出个性化的问候。
#创建多个表示不同用户的实例，并对每个实例都调用上述两个方法。
# class User():
#     """用户"""
#     def __init__(self,first_name,last_name,age,city):
#         """属性名字"""
#         self.first_name = first_name
#         self.last_name = last_name
#         self.age = age
#         self.city = city
#     def  greet_user(self):
#         """简单问候"""
#         print("Hello," + self.first_name.title() + " " + self.last_name.title())
#     def describe_user(self):
#         """描述用户"""
#         print("Your name is " + self.first_name.title() + " " + self.last_name.title())
#         print("Your age is " + str(self.age))
#         print("You live in " + self.city)
# me = User("li","jia",18,"linshui")
# her = User("Y","iu",21,"chongqing")
# his = User("M","qwe",24,"chengdu")
# me.describe_user()
# her.greet_user()
# his.describe_user()
#9-4 就餐人数 就餐人数 ：在为完成练习9-1而编写的程序中，添加一个名为number_served 的属性，并将其默认值设置为0。
#根据这个类创建一个名为restaurant 的实 例；打印有多少人在这家餐馆就餐过，然后修改这个值并再次打印它。
# class Restaurant():
#     """餐馆"""
#     def __init__(self,restaurant_name,cuisine_type,number_served):
#         self.restaurant_name = restaurant_name
#         self.cuisine_type = cuisine_type
#         self.number_served = 0
#     def describe_restaurant(self):
#         """餐馆信息"""
#         print("My restaurant's name is " + self.restaurant_name.title() + '.')
#         print("It has " + self.cuisine_type)
#         print("It has " + str(self.number_served) + " sat")
#     def open_restaurant(self):
#         """正在营业"""
#         print("My restaurant is open")
#     def update_number(self,number):
#         if number > self.number_served:
#             self.number_served = number
#         else:
#             print("The number can't be minus.")
#     def increment_number(self,plus):
#         if plus > 0:
#             self.number_served += plus
#         else:
#             print("The number can't decrease.")
# restaurant = Restaurant("hha","qwe",10000000)
# restaurant.describe_restaurant()
# restaurant.number_served = 20000000000000
# restaurant.describe_restaurant()
# restaurant.update_number(-1)
# restaurant.describe_restaurant()
# restaurant.increment_number(-1)
#9-5 尝试登录次数 尝试登录次数 ：在为完成练习9-3而编写的User 类中，添加一个名为login_attempts的属性
# 编写一个名为increment_login_attempts() 的方法， 它将属性login_attempts 的值加1。
#再编写一个名为reset_login_attempts() 的方法，它将属性login_attempts 的值重置为0。 
# class User():
#     """尝试登录次数"""
#     def __init__(self,login_attempts):
#         self.login_attempts = login_attempts
#     def increment_login_attempts(self):
#         self.login_attempts += 1
#     def reset_login_attempts(self):
#         self.login_attempts = 0
#根据User 类创建一个实例，再调用方法increment_login_attempts() 多次。
# 打印属性login_attempts 的值，确认它被正确地递增；然后，调用方 法reset_login_attempts() ，
# 并再次打印属性login_attempts 的值，确认它被重置为0。 
# me = User(13)
# me.increment_login_attempts()
# print(str(me.login_attempts))
# me.increment_login_attempts()
# print(str(me.login_attempts))
# me.reset_login_attempts()
# print(str(me.login_attempts))
#9-6 冰淇淋小店 冰淇淋小店 ：冰淇淋小店是一种特殊的餐馆。
#编写一个名为IceCreamStand 的类，让它继承你为完成练习9-1或练习9-4而编写的Restaurant类。
#这两个版本的Restaurant类都可以，挑选你更喜欢的那个即可
#添加一个名为flavors 的属性，用于存储一个由各种口味的冰淇淋组成的列表
#编写一个显示这些冰淇淋 的方法。创建一个IceCreamStand 实例，并调用这个方法
# class Restaurant():
#     """餐馆"""
#     def __init__(self,restaurant_name,cuisine_type):
#         self.restaurant_name = restaurant_name
#         self.cuisine_type = cuisine_type
#     def describe_restaurant(self):
#         """餐馆信息"""
#         print("My restaurant's name is " + self.restaurant_name.title() + '.')
#         print("It has " + self.cuisine_type)
#     def open_restaurant(self):
#         """正在营业"""
#         print("My restaurant is open")
# class IceCreamStand(Restaurant):
#     def __init__(self,restaurant_name,cuisine_type):
#         """初始化父类属性"""
#         super().__init__(restaurant_name,cuisine_type)
#         flavors =['chocolate','strawberry']
#         self.flavors = flavors
#     def describe_icecream(self):
#         for flavor in self.flavors:
#             print(flavor)
# my_shop = IceCreamStand("li","icecream")
# my_shop.describe_icecream()
# my_shop.describe_restaurant()
#9-7 管理员 管理员 ：管理员是一种特殊的用户。编写一个名为Admin 的类，让它继承你为完成练习9-3或练习9-5而编写的User 类。
#添加一个名为privileges 的属性，用 于存储一个由字符串   
#（如"can add post" 、"can delete post" 、"can ban user" 等）组成的列表。        
#编写一个名为show_privileges() 的方法，它 显示管理员的权限。创建一个Admin 实例，并调用这个方法。       
# class User():
#     """用户"""
#     def __init__(self,first_name,last_name,age,city):
#         """属性名字"""
#         self.first_name = first_name
#         self.last_name = last_name
#         self.age = age
#         self.city = city
#     def  greet_user(self):
#         """简单问候"""
#         print("Hello," + self.first_name.title() + " " + self.last_name.title())
#     def describe_user(self):
#         """描述用户"""
#         print("Your name is " + self.first_name.title() + " " + self.last_name.title())
#         print("Your age is " + str(self.age))
#         print("You live in " + self.city)
# class Admin(User):
#     """管理员"""
#     def __init__(self,first_name,last_name,age,city):
#         super().__init__(first_name,last_name,age,city)
#         """特殊属性：储存字符串的列表"""
#         self.privileges = []
#     def show_privileges(self):
#         for privilege in self.privileges:
#             print(privilege)
# you = Admin('l','m',18,'linshui')
# you.privileges = ["can add post","can delete post","can ban "user]
# you.show_privileges()
#9-8 权限 权限 ：编写一个名为Privileges 的类，它只有一个属性——privileges ，其中存储了练习9-7 所说的字符串列表
#将方法show_privileges() 移到这个类中。
#在Admin 类中，将一个Privileges 实例用作其属性。创建一个Admin 实例，并使用方法show_privileges() 来显示其权限。 
# class Privileges():
#     def __init__(self,privileges=["can add post","can delete post","can ban user"] ):
#         self.privileges = privileges
#     def show_privileges(self):
#         for privilege in self.privileges:
#             print(privilege)
# class User():
#     """用户"""
#     def __init__(self,first_name,last_name,age,city):
#         """属性名字"""
#         self.first_name = first_name
#         self.last_name = last_name
#         self.age = age
#         self.city = city
#     def  greet_user(self):
#         """简单问候"""
#         print("Hello," + self.first_name.title() + " " + self.last_name.title())
#     def describe_user(self):
#         """描述用户"""
#         print("Your name is " + self.first_name.title() + " " + self.last_name.title())
#         print("Your age is " + str(self.age))
#         print("You live in " + self.city)
# class Admin(User):
#     """管理员"""
#     def __init__(self,first_name,last_name,age,city):
#         super().__init__(first_name,last_name,age,city)
#         """特殊属性：储存字符串的列表"""
#         self.privileges = Privileges()
# me = Admin('l','o',18,'linshui')
# me.privileges.privileges = ["can add post","can delete post","can ban user"]
# me.privileges.show_privileges()
# me.describe_user()
# me.greet_user()
#9-9 电瓶升级 电瓶升级 ：在本节最后一个electric_car.py版本中，给Battery 类添加一个名为upgrade_battery() 的方法。
# 这个方法检查电瓶容量，如果它不是85，就将它 设置为85。
# 创建一辆电瓶容量为默认值的电动汽车，调用方法get_range() ，然后对电瓶进行升级，并再次调用get_range() 。
# 你会看到这辆汽车的续航里程增加了。
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
#         if self.battery_size == 85:
#             range = 270
#         message = "This car can go approximately " + str(range)
#         message += " miles on a full charge."
#         print(message)
#     def upgrade_battery(self):
#         if self.battery_size != 85:
#             self.battery_size = 85
# me=ElectricCar('tesla','model s',2001)
# me.battery_size = 23
# me.battery.upgrade_battery()
# me.battery.get_range()
# me.battery.describe_battery()
#9-10 导入 导入Restaurant类 ：将最新的Restaurant 类存储在一个模块中
#在另一个文件中，导入Restaurant 类，创建一个Restaurant 实例，并调 用Restaurant 的一个方法，以确认import 语句正确无误。
ls=[1,2,3]
ls.reverse()
print(ls)

