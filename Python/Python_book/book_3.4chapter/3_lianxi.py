#练习3-2
# names = ['zhangfang','licao','lijinze','lixuefen']
# message = 'Thank you,'
# print(message + names[0] + '!')
# print(message + names[1] + '!')
# print(message + names[2] + '!')
# print(message + names[3] + '!')
# print(message + names[-1] + '!')
# #3-3通勤宣言
# ways = ['walking','running','bike','tesla_model3']
# print("I have owned a " + ways[-2] + '.\n' + "I always do " + ways[0] + '.' '\nI never ' + ways[1] + '.' + "\nI would like to own a " + ways[-1])
#3-4嘉宾名单（共进晚餐）
#names = ['lijinze','lijin','huyi','baolongxin']
#print("Dear " + names[0].title() + "\n\tI want to invite you to have dinner with me " + "\n\t\tyour lijiayan ")
#print("Dear " + names[1].title() + "\n\tI want to invite you to have dinner with me " + "\n\t\tyour lijiayan ")
#print("Dear " + names[3].title() + "\n\tI want to invite you to have dinner with me " + "\n\t\tyour lijiayan ")
#print("Dear " + names[2].title() + "\n\tI want to invite you to have dinner with me " + "\n\t\tyour lijiayan ")
#有人丢了
# lose_way = 'baolongxin'

# print(lose_way + " cannot arrive.")
#names[-1] = 'jianyue'

#print("Dear " + names[3].title() + "\n\tI want to invite you to have dinner with me " + "\n\t\tyour lijiayan ")
#print("Dear " + names[2].title() + "\n\tI want to invite you to have dinner with me " + "\n\t\tyour lijiayan ")
#print("Dear " + names[0].title() + "\n\tI want to invite you to have dinner with me " + "\n\t\tyour lijiayan ")
#print("Dear " + names[1].title() + "\n\tI want to invite you to have dinner with me " + "\n\t\tyour lijiayan ")
#names.insert(0,'suxiaoya')
#names.insert(2,'zhaoqiaoqiao')
#names.append('wushengyao')
#print("Dear " + names[0].title() + "\n\tI want to invite you to have dinner with me " + "\n\t\tyour lijiayan ")
#print("Dear " + names[1].title() + "\n\tI want to invite you to have dinner with me " + "\n\t\tyour lijiayan ")
#print("Dear " + names[2].title() + "\n\tI want to invite you to have dinner with me " + "\n\t\tyour lijiayan ")
#print("Dear " + names[3].title() + "\n\tI want to invite you to have dinner with me " + "\n\t\tyour lijiayan ")
#print("Dear " + names[-3].title() + "\n\tI want to invite you to have dinner with me " + "\n\t\tyour lijiayan ")
#print("Dear " + names[-2].title() + "\n\tI want to invite you to have dinner with me " + "\n\t\tyour lijiayan ")
#print("Dear " + names[-1].title() + "\n\tI want to invite you to have dinner with me " + "\n\t\tyour lijiayan ")
#只请两个人
#print("Sorry,I just can invite two!  Because my desks do not arrive.")
#message =" I am sorry I can not invite you for dinner."
#first = names.pop()

#print(first.title() + message)
#second = names.pop()

#print(second.title() + message)
#third = names.pop()

#print(third.title() + message)
#fourth = names.pop()

#print(fourth.title() + message)
#fifth = names.pop()
#print(fifth.title() + message)
#message = " you are my guest."
#print(names[0] + message)
#print(names[1] + message)
#del names[0]
#del names[1]
#print(names)
#对列表进行排序
# cars = ['baoma','tesla','jieke','aodi']
# cars.sort()#按小写字母从小到大排序——永久性
# print(cars)
# cars.sort(reverse=True)
# print(cars)
#无法使用临时排序的倒序！！
places = ['shanghai','beijing','bolin','niuyue']
# # print(places)
# # print(sorted(places))
# # print(places)
#print(len(places))#打印长度
# #sorted(reverse=True)
# #print(sorted(places))
# places.reverse()
# print(places)
# places.reverse()
# print(places)
# places.sort()
# print(places)
# places.sort(reverse=True)
# print(places)
loves =['tesla','xuanbin','linzhiyan','Germany']
loves.insert(0,'Spanish')
print(loves)
loves.remove('linzhiyan')
print(loves)
loves.pop()
print(loves)
del loves[0]
loves.sort(reverse=True)
print(sorted(loves))
loves.reverse()
print(loves)
print(len(loves))
#使用全
print(sorted(loves,reverse=True))