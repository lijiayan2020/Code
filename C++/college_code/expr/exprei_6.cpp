//������������ʵ�飨2ѧʱ��


1. �����غ���ʵ���������������������������ֵ��

#include<iostream>
using namespace std;
int max(int a,int b)
{
	if(a<b) a=b;
	return a;
 } 
double max(double a,double b,double c)
 {
 	if(a<b) a=b;
	if(a<c) a=c;
	return a;
 }
int main()
{
	int a,b;
	double n1,n2,n3;
	cout << "Please enter two integers.\n";
	cout << "a:"; cin >> a;
	cout << "b:"; cin >> b;
	cout << "MAX = " << max(a,b) << endl; 
	cout << "Please enter three floating-point numbers.\n";
	cout << "n1:"; cin >> n1;
	cout << "n2:"; cin >> n2;
	cout << "n3:"; cin >> n3;
	cout << "MAX = " << max(n1,n2,n3) << endl;
	return 0;
}

2. �����غ���ʵ���������������������������򣬰��մ�С�����˳�������������

#include<iostream>
using namespace std;
void sort(int a,int b)
{
	int temp;
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	cout << "increasing sequences: \n" << a << endl << b << endl;
}
void sort(double a,double b,double c)
{
	double temp;
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	if(a>c)
	{
		temp=a;
		a=c;
		c=temp;
	}
	if(b>c)
	{
		temp=b;
		b=c;
		c=temp;
	}
	cout << "increasing sequences: \n" << a << endl << b << endl << c << endl;
}	
int main()
{
	int a,b;
	double n1,n2,n3;
	cout << "Please enter two integers.\n";
	cout << "a:"; cin >> a;
	cout << "b:"; cin >> b;
	sort(a,b);
	cout << "Please enter three floating-point numbers.\n";
	cout << "n1:"; cin >> n1;
	cout << "n2:"; cin >> n2;
	cout << "n3:"; cin >> n3;
	sort(n1,n2,n3);
	return 0;
	
}		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

