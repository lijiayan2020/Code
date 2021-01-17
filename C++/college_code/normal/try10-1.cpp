#include <iostream>
#include <string>
using namespace std;

class Student
{public:
	void display();
	void set()
	{
		cin>>num>>name>>sex;
	}
protected:
	int num;
	string name;
	char sex;
};

void Student::display()
{
	cout<<"num: "<<num<<endl;
	cout<<"name: "<<name<<endl;
	cout<<"sex: "<<sex<<endl;
}

class Graduate:protected Student
{public:
	void show();
	void set()
	{
		cout<<"please set in num, name, sex, age, addr:"<<endl;
		Student::set();
		cin>>age>>addr;
	}
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
	Graduate grad1;
	grad1.set();
	grad1.show();
	return 0;	
}
