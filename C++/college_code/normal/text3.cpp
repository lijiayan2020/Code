#include<iostream>
using namespace std;
int main()
{
	int a=9;
	int *p=new int;
	p=&a;
	cout<<*p<<endl;
	delete p;
	cout<<*p<<endl;
	return 0;
}
