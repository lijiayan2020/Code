//1. ����һ����İ뾶r�����������V��
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
 
2. �Ӽ�������һ����ĸ�������ASCII�롣
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
