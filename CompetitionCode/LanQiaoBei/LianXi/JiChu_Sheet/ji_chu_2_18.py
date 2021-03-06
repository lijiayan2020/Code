#2.18 报时助手
'''
问题描述
　　给定当前的时间，请用英文的读法将它读出来。
　　时间用时h和分m表示，在英文的读法中，读一个时间的方法是：
　　如果m为0，则将时读出来，然后加上“o’clock”，如3:00读作“three o’clock”。
　　如果m不为0，则将时读出来，然后将分读出来，如5:30读作“five thirty”。
　　时和分的读法使用的是英文数字的读法，其中0~20读作：
　　0:zero, 1: one, 2:two, 3:three, 4:four, 5:five, 6:six, 7:seven, 8:eight, 9:nine, 
    10:ten, 11:eleven, 12:twelve, 13:thirteen, 14:fourteen, 15:fifteen, 
    16:sixteen, 17:seventeen, 18:eighteen, 19:nineteen, 20:twenty。
　　30读作thirty，40读作forty，50读作fifty。
　　对于大于20小于60的数字，首先读整十的数，然后再加上个位数。如31首先读30再加1的读法，读作“thirty one”。
　　按上面的规则21:54读作“twenty one fifty four”，9:07读作“nine seven”，0:15读作“zero fifteen”。
输入格式
　　输入包含两个非负整数h和m，表示时间的时和分。非零的数字前没有前导0。h小于24，m小于60。
输出格式
　　输出时间时刻的英文。
样例输入
0 15
样例输出
zero fifteen
'''
#我的，不懂为什么过不了
time = {0:"zero", 1: "one", 2:"two", 3:"three", 4:"four", 5:"five", 6:"six", 7:"seven", 8:"eight", 9:"nine", 
    10:"ten", 11:"eleven", 12:"twelve", 13:"thirteen", 14:"fourteen", 15:"fifteen", 
    16:"sixteen", 17:"seventeen", 18:"eighteen", 19:"nineteen", 20:"twenty", 30:"thirty", 40:"forty", 50:"fifty"}
t = list(map(int, input().split()))
t[1] = int(str(t[1]))
if -1<t[0]<24 and -1<t[1]<60:
    if t[1] == 0:
        print(time[t[0]] + " o’clock")
        
    else:
        if t[0] not in time.keys():
            b = t[0]%10
            a = t[0] - b
            t.pop(0)
            t.insert(0,a)
            t.insert(1,b)
        if t[-1] not in time.keys():
            b = t[-1]%10
            a = t[-1] - b
            t.pop(-1)
            t.append(a)
            t.append(b)
        for i in t:
            print(time[i], end=" ")
            h, m = map(int, input().split())
#题解
time = {0: 'zero', 1: 'one', 2: 'two', 3: 'three', 4: 'four', 5: 'five', 6: 'six', 7: 'seven', 8: 'eight', 9: 'nine',
        10: 'ten', 11: 'eleven', 12: 'twelve', 13: 'thirteen', 14: 'fourteen', 15: 'fifteen', 16: 'sixteen',
        17: 'seventeen', 18: 'eighteen', 19: 'nineteen', 20: 'twenty', 21: 'twenty one', 22: 'twenty two',
        23: 'twenty three', 30: 'thirty', 40: 'forty', 50: 'fifty'}
        # 其实21，22，23可以不加入字典中，但为了后边小时略去判断简化代码，直接加在字典中，方便后边直接输出小时

if m == 0:
    print(time[h] + ' o\'clock')
else:
    print(time[h], end=' ')
    if 0 < m <= 20 or m == 30 or m == 40 or m == 50:
        print(time[m])
    elif 20 < m < 30:
        print(time[20] + ' ' + time[m - 20])
    elif 30 < m < 40:
        print(time[30] + ' ' + time[m - 30])
    elif 40 < m < 50:
        print(time[40] + ' ' + time[m - 40])
    else:
        print(time[50] + ' ' + time[m - 50])



