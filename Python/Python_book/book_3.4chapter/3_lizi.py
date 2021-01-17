#列表
#names = ["lijiayan","lijinze",'lichao']
#print(name[2].title())
# print(name[-1])#-1表示最后一个元素。以此类推，-2指倒数第二个元素。
# message = "My firest name is " + name[0].title() + '.'
# print(message)
#修改列表元素
#name[0] = 'lijinze'
#print(name[0])
#添加元素
# print(name)
# name.append('zhangbo')#添加到末尾
# print(name)
#names = []
# names.append('lijinze')
# print(names)
# names.append('lichao')
# print(names)
#插入元素——insert()
#names = ['lijnze']
#names.insert(0,'lichao')
#print(names)
#删除元素-del语句
#del names[0]
#print(names)
#使用-pop()删除列表末尾元素,并且还能访问。
# popped_name = names.pop()
# print(names)
# print(popped_name) 
# print('The last name I write is  ' + popped_name)
#使用pop()删除任意元素
# first_name = names.pop(0)
# print(names)
# print('The first name I write is ' + first_name)
#根据值删除元素remove()
#dear_name = 'lijinze'
#names.remove('lijinze')
#print(dear_name.title() + " is my favourate name" )
#print(names)
#排序
cars = ['aodi','baoma','tesla','jieke','sanling']
# cars.sort()#小写字母顺序——永久性！
# print(cars)
# cars.sort(reverse=True)#小写字母倒序-永久性！
# print(cars)

#print(sorted(cars))#临时改变顺序

print(cars)
cars.reverse()#倒序排列-永久性
print(cars)
len(cars)#因为没有配好，所以无法执行

