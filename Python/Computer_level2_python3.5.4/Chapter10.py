#第十章编程题1
import jieba
ls="Python是最有意思的编程语言"
lst=jieba.lcut(ls)
lst=[word for word in ls]
print(lst)
#2
import jieba
txt="今天晚上我吃了意大利面"
jieba.add_word("意大利面")
