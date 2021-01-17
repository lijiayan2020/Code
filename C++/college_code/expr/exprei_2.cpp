//1. 输入一个球的半径r，计算其体积V。
#include<iostream>
int main()
{
	using namespace std;
	double r,V;
	cout << "Please enter a radius:";
	cin >> r; 
	cout << (4.0/3)*3.14*r*r*r;
	return 0;
 } 
 
2. 从键盘输入一个字母，输出其ASCII码。
#include<iostream>
int main()
{
	using namespace std;
	char a;
	cout << "Please enter a letter:";
	cin >> a;
	cout << int(a);
	return 0;
}
