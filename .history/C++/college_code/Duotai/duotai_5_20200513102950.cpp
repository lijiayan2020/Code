
#include<iostream>
#include<string>
// 虚析构和纯虚析构 
using namespace std;
class Animal
{
public:
	Animal()
	{
		cout << "Animal构造函数调用" << endl; 
	 } 
//	 //利用虚析构可以解决父类指针释放子类对象不干净的问题 
//	 virtual ~Animal()
//	 {
//	 	cout << "Animal析构函数调用" << endl; 
//	 }
	 //纯虚析构
	 virtual ~Animal()=0; 
	//纯虚函数 
	
	virtual void speak()=0;	
};
//纯虚析构 (需要声明，需要实现)
//有了纯虚析构，这个类也属于抽象类 
Animal:: ~Animal()
{
	cout <<"Animal纯虚析构调用" << endl; 
}
class Cat:public Animal
{
public:
	string *m_Name;
	Cat(string name)
	{
		cout << "Cat 构造函数调用" << endl; 
		m_Name = new string(name);
	}
	void speak()
	{
		cout << *m_Name << "小猫在说话" << endl; 
	}
	~Cat()
	{
		if(m_Name!= NULL)
		{
			cout << "Cat析构函数调用" << endl; 
			delete m_Name;
			m_Name = NULL;
		}
	}
	
};
void test01()
{
	Animal *animal = new Cat("Tom");
    animal->speak();
    //父类指针在析构 的时候，，不会调用子类中的析构函数 ，导致子类如果有堆区属性，出现 内存泄漏 
    delete animal;
}
int main()
{
	test01();
	return 0;
}
