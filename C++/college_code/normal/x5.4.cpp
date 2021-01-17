#include<iostream>
using namespace std;

class Point
{public:
	Point()	{	}
	virtual ~Point() 
	{cout<<"Executing Point destructor"<<endl;	}
}; 

class Circle: public Point
{public:
	Circle() {	}
	~Circle() 
	{cout<<"Executing Circle destructor"<<endl;	}
private:
	int radius;
};

int main()
{
	Point *p = new Circle;
	delete p;
	return 0;
}

