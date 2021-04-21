#2.26 矩形面积交
'''
问题描述
　　平面上有两个矩形，它们的边平行于直角坐标系的X轴或Y轴。
对于每个矩形，我们给出它的一对相对顶点的坐标，请你编程算出两个矩形的交的面积。
输入格式
　　输入仅包含两行，每行描述一个矩形。
　　在每行中，给出矩形的一对相对顶点的坐标，每个点的坐标都用两个绝对值不超过10^7的实数表示。
输出格式
　　输出仅包含一个实数，为交的面积，保留到小数后两位。
样例输入
1 1 3 3
2 2 4 4
样例输出
1.00
'''
#想法就是 横纵坐标的交集，(加绝对值)，然后相乘，就是面积，再保留两位小数format
'''#TODO:不知道自己哪里错了
matrix1 = list(map(float, input().split()))
matrix2 = list(map(float, input().split()))

x1 = list()
x2 = list()
y1 = list()
y2 = list()
for i in range(4):
    if i%2==0:
        x1.append(matrix1[i])
        x2.append(matrix2[i])
    if i%2!=0:
        y1.append(matrix1[i])
        y2.append(matrix2[i])
#排序
x1.sort()
x2.sort()
y1.sort()
y2.sort()
# print(x1)
# print(x2)
# print(y1)
# print(y2)
def jiao_ji(x1, x2):
    if x1[0]<x2[0] and x1[1] > x2[1]:
        return x2[1] - x2[0]
    elif x2[0]<x1[0] and x2[1] > x1[1]:
        return x1[1] - x1[0]
    elif x1[0]>=x2[1] or x2[0]>=x1[1]:
        return 0
    else:
        if x1[0]<x2[0]:
            return x1[1] - x2[0]
        if x2[0]<x1[0]:
            return x2[1] - x1[0]
x_jiao = jiao_ji(x1, x2)
y_jiao = jiao_ji(y1, y2)
print("{:+.2f}".format(x_jiao*y_jiao))
'''
#看完题解后
matrix1 = list(map(float, input().split()))
matrix2 = list(map(float, input().split()))
s = 0#面积
x1 = max(min(matrix1[0],matrix1[2]),min(matrix2[0],matrix2[2]))
y1 = max(min(matrix1[1],matrix1[3]),min(matrix2[1],matrix2[3]))
x2 = min(max(matrix1[0],matrix1[2]),max(matrix2[0],matrix2[2]))
y2 = min(max(matrix1[1],matrix1[3]),max(matrix2[1],matrix2[3]))
if x1<x2 and y1<y2:
    s = (x2-x1) * (y2-y1)
print("%.2f" % s)

