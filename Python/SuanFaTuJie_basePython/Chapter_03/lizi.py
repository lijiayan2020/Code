#循环（性能好）
'''
def look_for_key(main_box):
    pile = main_box.make_a_pile_to_look_through()
    while pile is not empty:
        box = pile.grab_a_box()
        for item in box():
            if item.is_a_box():
                pile.append(item)
            elif item.is_a_key():
                print("found the key!")
'''               

#递归（容易理解）
def look_for_key(box):
    for item in box:
        if item.is_a_box():
            look_for_key(item)
            
        elif item.is_a_key():
            print("found the key!")
            
            
            
#基线条件和递归条件
"""倒计时"""
def countdown(i):#将会无限循环
    print(i)
    countdown(i-1)
    
def countdown(i):
    if i <= 1:
        return
    else:
        print(i)
        countdown(i-1)

#栈
"""
def greet(name):
    print("hello, " + name + " !")
    greet2(name)
    print("getting ready today say bye...")
    bye()
    
def greet2():
    print("how are you, " + name + " ?")
def bye():
    print("ok bye!")
"""