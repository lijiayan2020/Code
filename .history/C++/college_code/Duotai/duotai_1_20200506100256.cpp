#include<iostream>
using namespace std;

//父类 
class  Animal
{
public:
	virtual void speak()
	{
		cout << "动物在说话\n";
	}
};
//猫类 
class Cat:public Animal
{
public:
	void speak()
	{
		cout << "小猫在说话\n";		
	}
};
//狗类
class Dog:public Animal
{
public:
	void speak()
	{
		cout << "小狗在说话\n";		
	}
}; 
void doSpeak(Animal &animal)
{
	animal.speak();
}
void text_01()
{
	Cat cat;
	doSpeak(cat); 
}
void text_02()
{
	Dog dog;
	doSpeak(dog);
} 
int main()
{
	text_01();
	text_02(); 
	return 0;
} 
