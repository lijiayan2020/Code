# 考 多行输入，单行输出
integers = list(map(int, input().split()))#将输入转化为列表，以空格为分隔符

while min(integers) >= 32:
     try:
          integers.extend(map(int, input().split()))
     except:
          break

for i in integers:
     print(chr(i), end = '')
     
