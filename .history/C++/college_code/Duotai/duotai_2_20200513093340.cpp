#include<iostream>
using namespace std;
#include<string>
//�ֱ�������ͨд���Ͷ�̬����ʵ�ּ�����

//��ͨд��
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
	//�������չ�¹��ܣ���Ҫ�޸�Դ��
	//����Ŀ����У��ᳫ ����ԭ��
	//����չ���п��ţ����޸Ľ��йر� 
	int m_Num1;//������1
	int m_Num2;//������2 
};
void test01()
{
	//��������������
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 =10; 
	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
	cout << c.m_Num1 << "/" << c.m_Num2 << "=" << c.getResult("/") << endl;
 } 
 //���ö�̬ʵ�ּ�����
 //ʵ�ּ����������ࣨʲô����д��
 class AbstractCalculator
 {public:
 	virtual int getResult()
 	{
 		return 0;
	 }
 	
 	
 	
 	int num1;
 	int num2;
 };
 //�ӷ���������
 class AddCalculator:public  AbstractCalculator
 {
 	public:
 	virtual int getResult()
 	{
 		return num1+num2;
	 }
};
 //������������
 class SubCalculator:public  AbstractCalculator
 {
 	public:
 	virtual int getResult()
 	{
 		return num1-num2;
	 }
}; 
//�˷��������� 
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
	//��̬ʹ������
	//����ָ���������ָ���������
	//�ӷ� 
	 AbstractCalculator * abc = new  AddCalculator;
	 abc->num1 =10;
	 abc->num2 =10;
	 
	 cout << abc->num1 << " + " << abc->num2 <<" = " << abc->getResult() << endl;
	 //�����ǵ�����
	 delete abc;
	 
	 
	 //����
	 abc= new SubCalculator;
	 abc->num1 =10;
	 abc->num2 =10;
	 cout << abc->num1 << " - " << abc->num2 << "=" << abc-> getResult() << endl; 
	 delete abc;
	 
	 //�˷� 
	 abc= new MulCalculator;
	 abc->num1 =10;
	 abc->num2 =10;
	 cout << abc->num1 << " * " << abc->num2 << "=" << abc-> getResult() << endl; 
	 delete abc;
}
 //��̬�ô�
 //1.��֯�ṹ����
//2.�ɶ���ǿ  
//3.����ǰ�� �ͺ��ڵ���չ�Լ�ά���Ը� 
 int main()
{
	test02();
	return 0;
 } 
 //C++�����ᳫ���ö�̬��Ƴ���ܹ�����Ϊ��̬�ŵ�ܶ� 
