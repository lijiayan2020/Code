###闰年
##y=eval(input("请输入年份："))
##while True:
##    try:
##        if y%4==0 and y%100!=0:
##            print("闰年")
##        elif y%400==0:
##            print("闰年")
##    except:
##        print("请输入数字！")
####        continue
###猜数游戏续
##import random
##target = random.randint(1,1000)
##count = 0
##while True:
##    try:
##        guess = eval(input("请输入一个猜测的整数（1至1000）"))
##        if type(guess)!=type(123):
##            print("请输入一个整数！")
##            continue
##    except:
##        print("输入有误，请重试，不计入猜测次数哦！")
##        continue
##    count = count+1
##    if guess>target:
##        print("猜大了！")
##    elif guess<target:
##        print("猜小了！")
##    else:
##        print("猜对了！")
##        break
##print("此轮的猜测次数是;",count)
##    
####羊车门问题
##import random
##change = 0
##nochange = 0
##for i in range(100000):
##    real = random.randint(1,3)
##    chioce = random.randint(1,3)
##    if real == chioce:
##        change =change+1
##    else:
##        nochange=nochange+1
##print("不更改的概率{}，更改的概率{}".format(nochange/100000,change/100000))
##    
##        
