//��̬���� ������Ʒ
// ��ˮ-����-���뱭��- 
#include <iostream>
using namespace std;
class AbstractDrinking
{
public:
	//��ˮ 
	virtual void Boil()=0;
	
	//����
	virtual void Brew()=0;
	
	//���뱭��
	virtual void PourInCup()=0; 
	
	//���븨��
	virtual void PutSomething()=0; 
	 
	//������Ʒ
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	 } 
 };
 
 //��������
 class Coffee:public AbstractDrinking 
 {
 public:
	//��ˮ 
	virtual void Boil()
	{
		cout << "����ˮ" << endl; 
	}
	//����
	virtual void Brew()
	{
		cout << "���ݿ��� " << endl; 
	}
	
	//���뱭��
	virtual void PourInCup()
	{
		cout << " ���뿧�ȱ�" << endl; 
	}
	
	//���븨��
	virtual void PutSomething()
	{
		cout << "�����Ǻ�ţ��"  << endl; 
	}
	 	
 };
 class Tea :public AbstractDrinking
 {
 public:
	//��ˮ 
	virtual void Boil()
	{
		cout << "����ˮ" << endl; 
	}
	//����
	virtual void Brew()
	{
		cout << "���ݲ�Ҷ " << endl; 
	}
	
	//���뱭��
	virtual void PourInCup()
	{
		cout << " ����豭" << endl; 
	} 
	
	//���븨��
	virtual void PutSomething()
	{
		cout << "����Ҫ���븨��"  << endl; 
	}
	 	
 };
 
 //��������
 void  doWork(AbstractDrinking *abs)
 {
 	abs->makeDrink();
 	delete abs;
  } 
 void test01()
 {
 	//��������
	 doWork(new Coffee) ;
	 cout << "--------" << endl;
	 //������Ҷ
	 doWork(new Tea) ;
  } 
int main()
{
	test01();
	return 0;
 } 
