def InputYear():
    year=eval(input("请输入年份："))
    return year
def JudgeLeap(y):
    try:
        if y%4==0 and y%100!=0:
            print("闰年")
        elif y%400==0:
            print("闰年")
    except:
        print("请输入数字！")
def main():
    JudgeLeap(InputYear())
main()
    
              
