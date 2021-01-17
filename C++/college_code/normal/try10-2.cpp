#include <iostream>
#include <string>
using namespace std;

class Student
{public:
	Student(int n,string nam,char s)
	{	num=n; name=nam; sex=s;	} 
	~Student() {}
	void display();
protected:
	int num;
	string name;
	char sex;
} ;

void Student::display()
{cout<<"num: "<<num<<endl;
cout<<"name: "<<name<<endl;
cout<<"sex: "<<sex<<endl;
}

class Graduate:protected Student
{public:
	Graduate(int n,string nam,char s,int a,string ad):\
		Student(n,nam,s),age(a),addr(ad)	{}
	~Graduate() {}
	void show();
private:
	int age;
	string addr;
};

void Graduate::show()
{
	display();
	cout<<"age: "<<age<<endl;
	cout<<"addr: "<<addr<<endl;
}

int main()
{
	Graduate grad1(1001,"Wang",'f',19,"115 Beijing Road");
	Graduate grad2(1002,"Zhang",'m',18,"213 Shanghai Road");
	grad1.show();
	grad2.show();
	return 0;
}
