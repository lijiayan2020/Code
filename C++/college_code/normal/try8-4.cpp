#include <iostream>
using namespace std;
class Date;   

class Time
{public: 
	Time(int, int, int);
	void display (const Date &);
private:
	int hour;
	int minute;
	int sec;
};

class Date
{public:
	Date(int, int, int);
//	friend void Time::display(const Date &);
	friend Time;
private:
	int month;
	int day;
	int year;
};

Time::Time(int h, int m, int s)
{ hour = h; minute = m; sec = s;}

void Time::display(const Date &d)
{
cout<<d.month<<" / "<<d.day<<" / "<<d.year<<endl;
cout<<hour<<" : "<<minute<<" : "<<sec<<endl;
}

Date::Date(int m, int d, int y)
{ month = m; day = d; year = y;}

int main()
{	Time t1(10, 13, 56);
	Date da(12, 25, 2000);
	t1.display(da);
	return 0;
}

