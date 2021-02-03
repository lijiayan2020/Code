class Restaurant():
    """餐馆"""
    def __init__(self,restaurant_name,cuisine_type,number_served):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type
        self.number_served = 0
    def describe_restaurant(self):
        """餐馆信息"""
        print("My restaurant's name is " + self.restaurant_name.title() + '.')
        print("It has " + self.cuisine_type)
        print("It has " + str(self.number_served) + " sat")
    def open_restaurant(self):
        """正在营业"""
        print("My restaurant is open")
    def update_number(self,number):
        if number > self.number_served:
            self.number_served = number
        else:
            print("The number can't be minus.")
    def increment_number(self,plus):
        if plus > 0:
            self.number_served += plus
        else:
            print("The number can't decrease.")