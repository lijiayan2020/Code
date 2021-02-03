from random import Randict
class Die():
    def __init__(self,sides=6):
        self.sides = sides
    def roll_die(self):
        x = Randict(1,self.sides)
        print(str(x))
me = Die()
me.sides = 10
for x in range(1,11):
    me.roll_die()