#操作列表for
# foods = ['pissa','sausage']
# for food in foods:
#     print(food.title() +" it is so delicious!" )
#     print("I want to eat " + food.title() + " again.")
# print("thank you!")
#s数值列表 函数range()
#for value in range(1,5):
#    print(value)#输出1234
#创建数字列表
# numbers = list(range(1,5))
# print(numbers)
#指定步长
# even_numbers = list(range(1,11,2))
# print(even_numbers)
# squares = []
# for value in list(range(1,11)):
#     square = value**2
#     squares.append(square)
#     print(squares)
# print(min(squares))
# print(max(squares))
# print(sum(squares))
#列表解析
# squares = [value**2 for value in list(range(1,11))]
# print(squares)
# players =['lijiayan','lijinze','lijin']
# print(players[0:3])
# print(players[0:])
# print(players[:3])
# print(players[-2:])
# print(players[-2:])
#元组（不可变的列表）
dimensions = (200, 50)#必须在，与50之间留空格
# print(dimensions[0])
# print(dimensions[1])
#dimensions[0] = 250#报错
for dimension in dimensions:
    print(dimension)
dimensions = (400, 50)
print(dimensions[0])