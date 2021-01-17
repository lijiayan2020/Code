class OrderedDict():
    """顺序输出"""
    def __init__(self,vocabulary):#要有两条下划线
        self.vocabulary = vocabulary
    def show_vocabulary(self):
        for key,value in self.vocabulary.items():
            print(key + ':' + value)
vocabulary ={'P':'Python','J':'Java','C':'C','V':'Visual_Basic','R':'Ruby'}
me = OrderedDict(vocabulary)
me.show_vocabulary()
# class OrderedDict():	
#     """docstring for OrderedDict"""	
#     def __init__(self,vocabulary):
#         self.vocabulary =vocabulary 
#     def show_vocabulary(self):
#         for key,value in self.vocabulary.items():	
#             print(key + ' : ' + value) 
# vocabulary = {'int':'integer number','char':'the base element of string','class':'a base form of OOP','struct':'you can use this to develop your own data struct','printf':'a function to print something on the screen'}
# o1 = OrderedDict(vocabulary)
# o1.show_vocabulary()
