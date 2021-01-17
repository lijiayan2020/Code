//ÏÔÊ¾Ê±¼ä
#include<iostream>
using namespace std;
void time(int hour , int minute);
int main()
{
	int h,m;
	cout << "hour";
	cin >> h;
	cout << "minutes";
	cin >> m;
	time(h,m);
	return 0;
 } 
void time(int hour , int minute)
 {
 	cout << "Enter the number of hours: " << hour<< endl;
 	cout << "Enter the number of minuters: " << minute << endl;
 	cout << "Time: " << hour << ":" << minute;
	 
 	
 }
