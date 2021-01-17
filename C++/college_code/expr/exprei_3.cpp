1. 求出三个整数的最大值和最小值。
#include<iostream>
using namespace std;
int max(int a,int b,int c)
{
	if(b>a)a=b;
	if(c>a)a=c;
	return a;
}
int min(int n1,int n2,int n3)
{
	if(n2<n1)n1=n2;
	if(n3<n1)n1=n3;
	return n1;
}
int main()
{
	using namespace std;
	int a,b,c;
	cout << "Please enter three integers.\n";
	cout <<"a:"; cin >> a;
	cout <<"b:"; cin >> b;
	cout <<"c:"; cin >> c;
	cout << "Max:" << max(a,b,c) << endl;
	cout << "Min:" << min(a,b,c) << endl;
	return 0;
 } 
//2. 判断用户输入正整数n是否为素数（n<1000），直到用户输入1为止。
#include<iostream>
#include<cmath>
using namespace std;
int judge(int a)
{
	int i,j=1;
	for(i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)j=0;
	}
	return j;
}
int main()
{
	int a,i,j=0;
	cout << "Please enter an integer:";
	cin >> a;
	while (j!=1)
	{
		
		if(judge(a))
			cout << "It's a prime number!" << endl;
		else 
			cout << "It's not a prime number!" << endl;
		cout << "Enter '1' to quit.";
		cin >> j;	
	}
	return 0;
}
