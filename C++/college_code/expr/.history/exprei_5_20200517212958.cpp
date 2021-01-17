//1函数实验
// 1. 定义一个函数，判断三个整型边长能否构成三角形，如果是三角形，则判断它是否是直角三角形。
// #include<iostream>
// //#include<algorithm>
// //#include<stdlib.h>
// //#include<cmath>
// using namespace std;
// void judge(int a,int b,int c);
// int max(int a,int b,int c);
// int main()
// {
// 	int a,b,c;
// 	cout << "Please enter three integer:\n";
// 	cout << "first:";cin >> a;
// 	cout << "second:";cin >> b;
// 	cout << "third：";cin >> c; 
// 	judge(a,b,c);
// 	return 0;
//  } 
//  void judge(int a,int b,int c)
//  {
//  	int temp,sum,m;
//  	sum = a+b+c;
//  	m=max(a,b,c);
//  	if(a!=m) 
//  	{
//  		if(a+sum-m-a<=m) cout << "It's a not triangle!\n";
//  		else 
// 		{
// 		 cout << "It's a triangle!\n";
// 		 int n;
// 		 n =sum-m-a;
// 		 if(a*a+n*n==m*m) cout << "And it's a right triangle!\n";
// 		 else cout << "But it's not a right triangle!\n";
// 		 }
// 	}
// }
// int max(int a,int b,int c)
// 	{
// 	int temp;
// 	if(a<b) 
// 	{
// 		temp=a;
// 		a=b;
// 		b=temp;
// 	}
// 	if(a<c)
// 	{
// 		temp=a;
// 		a=c;
// 		c=temp;
// 	}
// 	return a;
// }
 






//2. 定义一个函数，判断三个二维坐标上的点是否在同一条直线上。
#include<iostream>
using namespace std;

void judge(char a[2],char b[2],char c[2]);

int main()
{
	char a[2],b[2],c[2];
	int i;
	
	cout << "Please enter three pairs of coordinates:\n";
	
	cout << "First:\n";
	cout << "x:";cin >> a[0];
	cout << "y:"; cin >> a[1];
		
	cout << "Second:\n"; 
	cout << "x:";cin >> b[0];
	cout << "y:"; cin >> b[1];
	
	cout << "Third:\n"; 
	cout << "x:";cin >> c[0];
	cout << "y:"; cin >> c[1];
	
	judge(a,b,c); //开始写的 a[2] !!!!
	return 0;
}

void judge(char a[2],char b[2],char c[2])
{
	int n1,n2,n3;
	n1=b[1]-a[1];
	n2=a[0]-b[0];
	n3=-n1*a[0]+n2*b[2];

	if(n1*c[0]+n2*c[1]+n3==0)  cout << "Three points are in a straight line!\n";
	else   cout << "Three points are not in a straight line!\n";
}










