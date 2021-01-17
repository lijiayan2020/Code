#alien_0 = {'x_position':0,'y_position':25,'speed':'fast' }
#print("Original x_position:" + str(alien_0['x_position']))
#向右移动外星人
#根据外星人的速度决定将其移动多远
# if alien_0['speed'] == 'slow':
#     x_increment = 1
# elif alien_0['speed'] == 'medium':
#     x_increment = 2
# else:
    #这个外星人速度很快
    # x_increment = 3
#新位置等于老位置加上增量
# alien_0['x_position'] =  alien_0['x_position'] + x_increment
# print("New x_position:" + str(alien_0['x_position']))
# alien_0 = {'color':'green','points':5}
# print(alien_0)
# del alien_0['points']
# print(alien_0)
# users_0 = { 
#     'username':'efermi',
#     'first':'enrico',
#     'last':'fermi',
#     }
#使用for来遍历字典
# for k,v in users_0.items():
#     print('\nk:' + k)
#     print('v:' + v)
#使用keys遍历所有的键
# for name in users_0.keys():
#     print(name.title())
# want =['first','last']
# for k in users_0.keys():
#     print(k.title())
#     if k in want:
#         print( k + ' is ' + users_0[k] + ".")
# for k in sorted(users_0.keys()):
    # print( k + ' is ' + 'want')
#提取值用values
# for v in users_0.values():
#     print(v)
#使用set()[集合]来剔除重复项
aliens = []
for alien_number in range(30):
    new_alien = {'color':'green','points':5,'speed':'slow'}
    aliens.append(new_alien)
# for alien in aliens[ :5]:
    #print(alien)
# print("...")
# print("Total number of aliens is " + str(len(aliens)))
for alien in aliens[0:3]:
    if alien['color'] == 'green':
        alien['color'] = 'yellow'
        alien['speed'] = 'medium'
        alien['points'] = 10
#显示前五个外星人
for alien in aliens[0:5]:
    print(alien)
print("...")
for alien in aliens[0:3]:
    if alien['color'] == 'green':
        alien['color'] = 'yellow'
        alien['speed'] ='medium'
        alien['points'] = 10
    elif alien['color'] == 'yellow':
        alien['color'] = 'red'
        alien['speed'] = 'fast'
        alien['points'] = 15
for alien in aliens[0:5]:
    print(alien)