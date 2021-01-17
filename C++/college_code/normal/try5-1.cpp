#include <iostream>
using namespace std;

class Time
{private:
	int hour, minute, second;
public:
	void set();
	void show();
	Time(int h,int m,int s):hour(h),minute(m)
	{ second=s;	}
};

void Time::set()
{
	cout<<"Please set time by hour, minute, second"<<endl;
	cin>>hour>>minute>>second;
}

void Time::show()
{
	cout<<hour<<" : "<<minute \
	<<" : "<<second<<endl;
}

int main()
{
	Time t1(1,2,3),t2(4,5,6);
	t1.show();	
	t1.set();
	t2 = t1;
	t2.show();
	return 0;
}
