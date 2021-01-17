//÷∏’ÎΩªªª
#include <iostream>
using namespace std;

void swap(int *x,int *y);
int main()
{
	int a=6,b=9;
	cout << a << " " << b << endl;
	swap(&a,&b);
	cout << a << " " << b << endl;
	return 0;
}
void swap(int *x,int *y)
{
	int tp;
//	int *p;
//	*p=*x;*x=*y;*y=*p;
//	delete p;
	tp=*x;*x=*y;*y=tp;
	cout << "   " << *x << " " << *y << endl;
	
} 
