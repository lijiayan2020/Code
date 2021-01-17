#include <iostream>
#include <string>
using namespace std;
class Student
{private:
	int num;
	char sex;
	string name;
public:
	Student(int n=101, string nam="Feng", char s='m'): \
		num(n),sex(s),name(nam)	{}
	Student(string ,int , char );
	~Student();
	void display();
};

Student::Student(string nam,int n=1001,char s='m'): \
num(n)
{
	sex=s;	name=nam; 
}

Student::~Student()
{
	cout<<"Clear the name of "<<name<<endl;
}

void Student::display()
{
	cout<<"num: "<<num<<endl;
	cout<<"sex: "<<sex<<endl;
	cout<<"name: "<<name<<endl;
}

int main()
{
	Student stud1(101,"Wang",'f');
	stud1.display();
	Student stud2("Zhao");
	stud2.display();
	return 0;
} 
