//六、函数重载实验（2学时）


1. 用重载函数实现两个整数和三个浮点数的最大值。

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

2. 用重载函数实现两个整数和三个浮点数的排序，按照从小到大的顺序将排序结果输出。

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
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

