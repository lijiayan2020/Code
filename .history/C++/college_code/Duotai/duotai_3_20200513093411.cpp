#include<iostream>
//���麯���ͳ�����  
//�ڶ�̬�У������е��麯����ʵ���Ǻ�������ģ���Ҫ�ǵ���������д������
//��˿��Խ��麯����Ϊ���麯��


//���麯���﷨ virtual ����ֵ���� ������ �������б�=0��


//���������˴��麯���������Ҳ��Ϊ������


//�������ص�
//1. �޷�ʵ��������
//2.���������д�������еĴ��麯��������Ҳ���ڳ����� 
 
using namespace std;
class Base
{
public:
	//���麯��
	//������ 
	virtual void func() = 0;
};
class Son:public Base
{
public:
	void func()
	{
		cout << "func��������" << endl; 
	};
};
void test01()
{
	//Base b;//�޷�ʵ�� 
	//new Base;//�޷�ʵ�� 
	Base *base = new Son;
	base->func();
 } 
int main()
{
	test01();
	return 0;
 } 
