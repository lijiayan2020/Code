数组实验 
1. 计算一维向量的平均值，即求X=(X1+X2+…+Xn)/n。
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout << "Please enter the number of vectors：";
	cin >>  n;
	int a[n],num=0;
	double ave;
	for(i=0;i<n;i++)
	{
		cout << "Please enter a vector:";
		cin >> a[i];
		num+=a[i];
	}
	ave = double(num)/n;
	cout << "The average is " << ave;
	return 0;
	
 } 














2. 从键盘上输入一个正整数，判断它是否为回文数。所谓回文数是指正读和反读都是一样的数，如12321是回文数。
#include<iostream>
using namespace std;
int main()
{
	char a[20];
	int i,n,j=1;
	cout << "Please enter a number:";
	cin >> a[20];
	for(i=0;i<10;i++)
	{
		if(a[i]!=a[n-i-1]) 
		{
			j=0;
			break;
		}
	}
	if(j) cout << "It's a palindrome number!\n";
	else cout << "It's not a palindrome number!\n";
	return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
