#2.25 完美的代价
'''
问题描述
　　回文串，是一种特殊的字符串，它从左往右读和从右往左读是一样的。
小龙龙认为回文串才是完美的。现在给你一个串，它不一定是回文的，

请你计算最少的交换次数使得该串变成一个完美的回文串。
　　交换的定义是：交换两个相邻的字符
　　例如mamad
　　第一次交换 ad : mamda
　　第二次

交换 md : madma
　　第三次交换 ma : madam (回文！完美！)
输入格式
　　第一行是一个整数N，表示接下来的字符串的长度(N <= 8000)
　　第二行是一个字符串，长度为N.只包含小写字母
输出格式
　　如果可能，输出最少的交换次数。
　　否则输出Impossible
样例输入
5
mamad
样例输出
3
'''
#my error！！#TODO:不知道错哪里了，题解也看不懂，先放着吧

# n = int(input())
# arr = input()
# tag = ""


# # 在字符串指定位置插入字符
# # str_origin：源字符串  pos：插入位置  str_add：待插入的字符串
# #
# def str_insert(str_origin, pos, str_add):
#     str_list = list(str_origin)  # 字符串转list
#     str_list.insert(pos, str_add)  # 在指定位置插入字符串
#     str_out = ''.join(str_list)  # 空字符连接
#     return str_out

# #判断能否形成回文，若能，找到单个字母
# flag = 0# 代表奇数个字符的个数
# for i in arr:
#     count = arr.count(i)
#     if count%2!=0:
#         flag += 1
#         tag = i
# count = 0
# if flag != 1:
#     print("Impossible")
# else:#可以回文
#     #从左往中遍历，把最远的那个字符放到对应位置，
#     # 如果一对字符都在右边，那就需要从右看，将最左的字符放到对应位置
#     #最后放单个字符
#     #利用一个数来记录交换次数
#     for i in range(2):
#         #可能有多个相同的字符，只能把所有的索引值放在一个数组中进行比较，把最远的字符拿来放
#         if arr[i] != tag:
#             # print(arr[i])
#             suo_yin = [0]
#             for j in range(i+1,n):
#                 if arr[j] == arr[i]:
#                     suo_yin.append(j)
#                 # print(suo_yin)
#             max = i
#             for x in suo_yin:#找到最远的字符
#                 if x > max:
#                     max = x
#             # print(max)
#             #把最远字符放在基准字符的对应位置
#             #先把字符删去，然后插入到对应位置
#             add_str = arr[max]
#             str_list = list(arr)
#             str_list.pop(max)
#             arr = "".join(str_list)
#             num = n-1-i
#             # print(num)
#             # print(num-max)
#             arr = str_insert(arr,num,add_str)
#             count += abs(num-max)
# # print(count)
# # print(arr)
# # 放单个字符:
# if flag == 1:
#     for i in range(n):
#         if arr[i]==tag:
#             # print(i)
#             str_list = list(arr)
#             str_list.pop(i)
#             arr = "".join(str_list)
#             arr = str_insert(arr,(n-1)//2,tag)
#             num = (n - 1) // 2 - i

#             count += abs(num)

#     print(count)
# # print(tag)
n = int(input())

pal = list(input())

count = flag = 0  # count计数，flag判断是否已经有一个单独的奇个数的字符了

m = n - 1

for i in range(m):  # 从头遍历到倒数第二个字符
    for k in range(m, i - 1, -1):  # 从后面往前一直到i寻找和pal[i]相同的pal[k]
        if k == i:  # 如果找不到相同的
            if n % 2 == 0 or flag == 1:  # impossible的两种情况
                print('Impossible')
                exit()
            flag = 1
            count += int(n / 2) - i#TODO: 为什么不加绝对值
        elif pal[k] == pal[i]:
            for j in range(k, m):  # 找到相同的，进行交换
                pal[j], pal[j + 1] = pal[j + 1], pal[j]
                count += 1  # 计数器加1
            m -= 1  # 最后拍好序的不在进行比较
            break

print(count)
