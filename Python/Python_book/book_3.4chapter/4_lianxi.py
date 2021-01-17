#用for 操作列表
#pizzas = ['France','Germany','China']
#for pizza in pizzas:
#    print("I like " + pizza + " pizza")
#我想跳过这个for,虽然很简单，但是。。。
#数到20
# squares = [value for value in list(range(1,1000001))]
#print(squares)
# print(min(squares))
# print(max(squares))
# print(sum(squares))
# even_numbers = [value for value in list(range(1,20,2))]
# print(even_numbers)
# numbers = [value for value in list(range(3,33,3))]
# print(numbers)
# li_numbers = [value**3 for value in list(range(1,11)) ]
# print(li_numbers)
li_numbers = []
for value in list(range(1,11)):
    number = value**3
    print(number)

