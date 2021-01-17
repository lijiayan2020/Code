#include<iostream>
using namespace std;

//���� 
class  Animal
{
public:
	virtual void speak()
	{
		cout << "������˵��\n";
	}
};
//è�� 
class Cat:public Animal
{
public:
	void speak()
	{
		cout << "Сè��˵��\n";		
	}
};
//����
class Dog:public Animal
{
public:
	void speak()
	{
		cout << "С����˵��\n";		
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
