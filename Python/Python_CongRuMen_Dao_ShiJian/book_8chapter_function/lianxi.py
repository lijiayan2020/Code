# def   display_message():
#     print("This chapter is talking about function.")
# display_message()
#T恤
# def make_shirt(size,message):
#     print("The T-shirt is " + size +",and it have text:" + message)
# make_shirt("M","LOVE")
# make_shirt(size="M",message="LOVE")
# 大号T恤
# def make_shirt(size,message="I love Python"):
#     print(size + " " + message)
# make_shirt("L")
# make_shirt("M")
# make_shirt("M",message="I love you")
#城市
# def describe_city(name,city = 'China'):
#     print(name + " is in " + city + ".")
# describe_city('Beijing')
# describe_city("shanghai")
# describe_city("Newyork",city="America")
# #8-6城市名
# def city_country(city,country):
#     message = '"' + city +',' + country + '"'
#     return message
# f = city_country("beijing",'China')
# print(f)
#8-7专辑
# def make_album(name,album,number=''):
#     formatted  = {}
#     formatted[name] = album
#     if number:
#         formatted['number'] = number
#     return formatted
# d = make_album("LI","LOVE")
# f = make_album("Z","I",number=1)
# g = make_album("S","YOU")
# print(d)
# print(f)
# print(g)
#`8-8用户的专辑
# 8-9魔术师
# def show_magicians(magicians):
#     print(magicians)
# magicians = ['l','k','j']
# show_magicians(magicians)
#了不起的魔术师
# def show_magicians(change_name):
#     print(change_name)
# def make_great(magicians,change_name):
#     while magicians:
#         current_name = magicians.pop() + " " + 'the Great'
#         change_name.append(current_name)
# magicians = ['l','k','j']
# change_name = []
# make_great(magicians,change_name)
# show_magicians(change_name)

#8-11  不变的魔术师 ：修改你为完成练习8-10而编写的程序，在调用函数make_great() 时，向它传递魔术师列表的副本。
# 由于不想修改原始列表，请返回修改后的 列表，并将其存储到另一个列表中。分别使用这两个列表来调用show_magicians() ，确
#认一个列表包含的是原来的魔术师名字，而另一个列表包含的是添加了字样“the Great”的魔术师名字。
# def show_magicians(list):
#     print(list)
# def make_great(magicians,change_name):
#     while magicians:
#         current_name = magicians.pop() + " " + 'the Great'
#         change_name.append(current_name)
# magicians = ['l','k','j']
# change_name = []
# make_great(magicians[:],change_name)
# show_magicians(change_name)
# show_magicians(magicians)
# 8-12 三明治 ： 编写一个函数， 它接受顾客要在三明治中添加的一系列食材。 这个函数只有一个形参（它收集函数调用中提供的所有食材） ， 
# 并打印一条消息， 对顾客点的三明治进行概述。 调用这个函数三次， 每次都提供不同数量的实参。
# def make_sandwich(*toppings):
#     """概述三明治"""
#     print("\nMaking a sandwich with the following toppins:")
#     for topping in toppings:
#         print(topping)
# make_sandwich('ham','toast','lettuce','tomato','egg')
# make_sandwich('ham')
# make_sandwich('lettuce')
#8-13  用户简介 ：复制前面的程序user_profile.py，在其中调用build_profile() 来创建有关你的简介；调用这个函数时，指定你的名和姓，以及三个描述你的键-值 对。
# def build_profile(first,last,**user_info):
#     """创建一个字典，其中包含我们知道的有关用户的一切"""
#     profile = {}
#     profile['first_name'] = first
#     profile['last_name'] = last
#     for key,value in user_info.items():
#         profile[key]  = value
#     return profile
# my_information = build_profile('jiayan','Li',
#             mum = 'zhangfang',
#             dad = 'Lichao',
#             brother = 'lijinze')
# print(my_information)
# #8-14 汽车 汽车 ：编写一个函数，将一辆汽车的信息存储在一个字典中。这个函数总是接受制造商和型号，还接受任意数量的关键字实参。这样调用这个函数：提供必不可 少的信息，以及两个名称—值对，如颜色和选装配件。这个函数必须能够像下面这样进行调用：
# def make_car(manufacturer,type,**car_info):
#     """概述我知道的有关车的一切"""
#     profile = {}
#     profile['manufacturer'] = manufacturer
#     profile['type'] = type
#     for key,value in car_info.items():
#         profile[key] = value
#     return profile
# car = make_car('subaru', 'outback', color='blue', tow_package=True)
# print(car)
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
class User():
    """用户"""
    def __init__(self,first_name,last_name,age,city):
        """属性名字"""
        self.first_name = first_name
        self.last_name = last_name
        self.age = age
        self.city = city
    def  greet_user(self):
        """简单问候"""
        print("Hello," + self.first_name.title() + " " + self.last_name.title())
    def describe_user(self):
        """描述用户"""
        print("Your name is " + self.first_name.title() + " " + self.last_name.title())
        print("Your age is " + str(self.age))
        print("You live in " + self.city)
me = User("li","jia",18,"linshui")
her = User("Y","iu",21,"chongqing")
his = User("M","qwe",24,"chengdu")
me.describe_user()
her.greet_user()
his.describe_user()