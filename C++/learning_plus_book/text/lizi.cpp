#include<iostream>
using namespace std;

double  cube(double x);
int main()
{
	double q = cube(1.2);
	cout << q << endl;
	return 0;
 } 
 
double  cube(double x)
{
	return x*x*x;
}
