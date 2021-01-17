#include <iostream>
#include <string>
using namespace std;
class Student
{public:
	Student(int n,string nam)
	{	num=n; name=nam;} 
	~Student() {cout<<"Delete Student: "<<name<<endl;}
	void display()
	{ cout<<"num: "<<num<<endl<<"name: "<<name<<endl;	}
protected:
	int num;
	string name;
};

class Graduate:public Student
{public:
	Graduate(int n,string nam,int n2,string nam2,int a,string ad):\
		Student(n,nam),monitor(n2,nam2),age(a),addr(ad)	{}
	~Graduate() {cout<<"Delete Graduate: "<<name<<endl;}
	void show_monitor()
	{cout<<endl<<"Class monnitor is: "<<endl;
	monitor.display();
	}
	void show()
	{
	cout<<"This student is: "<<endl;
	display();
	cout<<"age: "<<age<<endl;
	cout<<"addr: "<<addr<<endl;
	show_monitor(); 
	}
private:
	Student monitor;
	int age;
	string addr;
};

int main()
{	
Graduate grad1(1001,"Wang",10001,"Zhang",19,"115 Beijing Road");
	grad1.show();
	return 0;
}

