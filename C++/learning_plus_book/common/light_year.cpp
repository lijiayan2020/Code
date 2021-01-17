//¹âÄê
#include <iostream>
using namespace std;
double distance(double mile);
int main()
{
	double light_year;
	double dis;
	cout << "Enter the number of light years: ";
	cin >> light_year;
	dis = distance(light_year);
	cout << light_year << " light years = " << dis << " astronmical units.";
	return 0;
}
double distance(double mile)
{
	return mile*63240;
}
