/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-04-09 17:45:38
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-05-17 20:28:59
 */ 
//#include<iostream>
//int main()
//{
//	using namespace std;
//	double a,b;
//	cout << "请输入两个数\n";
//	cout << "A:";
//	cin >> a;
//	cout << "B:";
//	cin >> b;
//	cout << "两个数的和是:" << a+b << endl;
//	return 0;	 
// } 
#include<iostream>
int main()
{
	using namespace std;
	int a=1,i; 
	cout << "1到10的阶乘:";
	for(i=1;i<11;i++)
	{
		a*=i;
	}
	cout << a << endl;
	return 0;
}
