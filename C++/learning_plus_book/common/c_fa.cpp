//���϶�ת���϶�
#include<iostream>
using namespace std;
double fahre(int cel); //ԭ��
int main()
{
	int cel;
	double fa;
	cout << "Please enter aCelslue value: ";
	cin >> cel;
	fa = fahre(cel);
	cout << cel << " degrees Celsius is " << fa <<" degrees Fahrenheit.";
	return 0; 
}
double fahre(int cel)
{
	return cel*1.8 + 32.0;
}
