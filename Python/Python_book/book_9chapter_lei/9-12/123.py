from user import User
class Admin(User):
    """管理员"""
    def __init__(self,first_name,last_name,age,city):
        super().__init__(first_name,last_name,age,city)
        """特殊属性：储存字符串的列表"""
        self.privileges = Privileges()
class Privileges():
    def __init__(self,privileges=["can add post","can delete post","can ban user"] ):
        self.privileges = privileges
    def show_privileges(self):
        for privilege in self.privileges:
            print(privilege)