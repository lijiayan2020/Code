
#include<iostream>
#include<string>
// �������ʹ������� 
using namespace std;
class Animal
{
public:
	Animal()
	{
		cout << "Animal���캯������" << endl; 
	 } 
//	 //�������������Խ������ָ���ͷ�������󲻸ɾ������� 
//	 virtual ~Animal()
//	 {
//	 	cout << "Animal������������" << endl; 
//	 }
	 //��������
	 virtual ~Animal()=0; 
	//���麯�� 
	
	virtual void speak()=0;	
};
//�������� (��Ҫ��������Ҫʵ��)
//���˴��������������Ҳ���ڳ����� 
Animal:: ~Animal()
{
	cout <<"Animal������������" << endl; 
}
class Cat:public Animal
{
public:
	string *m_Name;
	Cat(string name)
	{
		cout << "Cat ���캯������" << endl; 
		m_Name = new string(name);
	}
	void speak()
	{
		cout << *m_Name << "Сè��˵��" << endl; 
	}
	~Cat()
	{
		if(m_Name!= NULL)
		{
			cout << "Cat������������" << endl; 
			delete m_Name;
			m_Name = NULL;
		}
	}
	
};
void test01()
{
	Animal *animal = new Cat("Tom");
    animal->speak();
    //����ָ�������� ��ʱ�򣬣�������������е��������� ��������������ж������ԣ����� �ڴ�й© 
    delete animal;
}
int main()
{
	test01();
	return 0;
}
