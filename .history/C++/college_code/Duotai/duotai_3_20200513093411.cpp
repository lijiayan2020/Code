#include<iostream>
//纯虚函数和抽象类  
//在多态中，父类中的虚函数的实现是毫无意义的，主要是调用子类重写的内容
//因此可以将虚函数改为纯虚函数


//纯虚函数语法 virtual 返回值类型 函数名 （参数列表）=0；


//当类中有了纯虚函数，这个类也称为抽象类


//抽象类特点
//1. 无法实例化对象
//2.子类必须重写抽象类中的纯虚函数，否则也属于抽象类 
 
using namespace std;
class Base
{
public:
	//纯虚函数
	//抽象类 
	virtual void func() = 0;
};
class Son:public Base
{
public:
	void func()
	{
		cout << "func函数调用" << endl; 
	};
};
void test01()
{
	//Base b;//无法实现 
	//new Base;//无法实现 
	Base *base = new Son;
	base->func();
 } 
int main()
{
	test01();
	return 0;
 } 
