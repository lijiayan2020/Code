#2.6 回文数
#正着数和倒着数都一样，输出所有的这样的四位数
import time
start = time.time()
def judge_hw(str):
    if str == str[::-1]: #str[::-1]倒转
        print(str)


for i in range(1000,10000):
    i = str(i)
    judge_hw(i)

end = time.time()
print(end - start)