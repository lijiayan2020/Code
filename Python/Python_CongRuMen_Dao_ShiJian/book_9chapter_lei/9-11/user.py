class Privileges():
    def __init__(self,privileges=["can add post","can delete post","can ban user"] ):
        self.privileges = privileges
    def show_privileges(self):
        for privilege in self.privileges:
            print(privilege)
class User():
    """用户"""
    def __init__(self,first_name,last_name,age,city):
        """属性名字"""
        self.first_name = first_name
        self.last_name = last_name
        self.age = age
        self.city = city
    def  greet_user(self):
        """简单问候"""
        print("Hello," + self.first_name.title() + " " + self.last_name.title())
    def describe_user(self):
        """描述用户"""
        print("Your name is " + self.first_name.title() + " " + self.last_name.title())
        print("Your age is " + str(self.age))
        print("You live in " + self.city)
class Admin(User):
    """管理员"""
    def __init__(self,first_name,last_name,age,city):
        super().__init__(first_name,last_name,age,city)
        """特殊属性：储存字符串的列表"""
        self.privileges = Privileges()