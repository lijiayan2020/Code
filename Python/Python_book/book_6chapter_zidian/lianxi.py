# alien_0 = {'color':'green','points':5}
# print(alien_0['color'])
# alien_0['x_position'] = 0
# alien_0['y_position'] = 25
# print(alien_0)
# alien_0 = {}
# alien_0['color'] = 'green'
# alien_0['points'] = 5
# print(alien_0)
# information = {'first_name':'jiayan','last_name':'li','age':18,'city':'linshui'}
# print(information)
# favourate_number = {
#     'Li':3,
#     'Rose':8,
#     'Mum':8
#     }
# print(favourate_number)
# learn = {
#     'title':'将每个单词的首字母大写',
#     'upper':'将每个字母大写',
#     'lower':'将每个字母小写',
#     'oppend':'在列表最后添加一个元素',
#     'del':'删除元素',
# }
# print('title' +':' + learn['title'])
# print('upper' +':' + learn['upper'])
# print('lower' + ':' + learn['lower'])
# print('oppend' +':' + learn['oppend'])
# print('del' + ':' + learn['del'])
# for k in learn.keys():
#     print(k)
# for v in learn.values():
#     print(v)
# Li = {'look':'beautiful','color':'yellow','city':'linshui'}
# Rose = {'look':'ugly','color':'dark','city':'hujian'}
# people = [Li,Rose]
# for person in people:
#     print(person)#我没办法将这个输出Li Rose
# momo = {'Pet_type':'dog','The_host_name':'xiali'}
# lijinze = {'Pet_type':'monkey','The_host_name':'lijiayan'}
# pets = [momo,lijinze]
# for pet in pets:
#     print(pet)
favourate_places = {'lijiayan':['Germany','Japan'],'zhangfang':['linshui'],'lichao':['linshui']}
for name,places in favourate_places.items():
    if len(places) != 1:
        print(name.title() + "'s favourate places are: ")
    else:
        print(name.title() + "'s favourate place is:")
    for place in places:
        print(place)
