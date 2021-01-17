#include<iostream>
using namespace std;
#include<string>
//分别利用普通写法和多态技术实现计算器

//普通写法
class Calculator
{public:
	int getResult(string opr)
	{
		if(opr=="+")
			return m_Num1+m_Num2;
		else if(opr=="-")
			return m_Num1-m_Num2;
		else if(opr=="*")
			return m_Num1*m_Num2;
		else if(opr=="/")
			return m_Num1/m_Num2;
	}
	//如果像扩展新功能，需要修改源码
	//在真的开发中，提倡 开闭原则
	//对扩展进行开放，对修改进行关闭 
	int m_Num1;//操作数1
	int m_Num2;//操作数2 
};
void test01()
{
	//创建计算器对象
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 =10; 
	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
	cout << c.m_Num1 << "/" << c.m_Num2 << "=" << c.getResult("/") << endl;
 } 
 //利用多态实现计算器
 //实现计算器抽象类（什么都不写）
 class AbstractCalculator
 {public:
 	virtual int getResult()
 	{
 		return 0;
	 }
 	
 	
 	
 	int num1;
 	int num2;
 };
 //加法计算器类
 class AddCalculator:public  AbstractCalculator
 {
 	public:
 	virtual int getResult()
 	{
 		return num1+num2;
	 }
};
 //减法计算器类
 class SubCalculator:public  AbstractCalculator
 {
 	public:
 	virtual int getResult()
 	{
 		return num1-num2;
	 }
}; 
//乘法计算器类 
class MulCalculator:public  AbstractCalculator 
{
 	public:
 	virtual int getResult()
 	{
 		return num1*num2;
	 }
};  
void test02()
{
	//多态使用条件
	//父类指针或者引用指向子类对象
	//加法 
	 AbstractCalculator * abc = new  AddCalculator;
	 abc->num1 =10;
	 abc->num2 =10;
	 
	 cout << abc->num1 << " + " << abc->num2 <<" = " << abc->getResult() << endl;
	 //用完后记得销毁
	 delete abc;
	 
	 
	 //减法
	 abc= new SubCalculator;
	 abc->num1 =10;
	 abc->num2 =10;
	 cout << abc->num1 << " - " << abc->num2 << "=" << abc-> getResult() << endl; 
	 delete abc;
	 
	 //乘法 
	 abc= new MulCalculator;
	 abc->num1 =10;
	 abc->num2 =10;
	 cout << abc->num1 << " * " << abc->num2 << "=" << abc-> getResult() << endl; 
	 delete abc;
}
 //多态好处
 //1.组织结构清晰
//2.可读性强  
//3.利于前期 和后期的扩展以及维护性高 
 int main()
{
	test02();
	return 0;
 } 
 //C++开发提倡利用多态设计程序架构，因为多态优点很多 
