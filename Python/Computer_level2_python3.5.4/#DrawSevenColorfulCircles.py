import turtle
#DrawSevenColorfulCircles.py
import turtle
colors=['red','orange','yellow','green','blue','indigo','purple']
for i in range(7):
    c=colors[i]
    turtle.color(c,c)
    turtle.begin_fill()
    turtle.rt(360/7)
    turtle.circle(50)
    turtle.end_fill()
turtle.done()
