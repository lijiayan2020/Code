#include <iostream>
using namespace std;

class Student
{private:
	int num;
	float score;

public:
	void display();
	void set();
	void revise()
	{
		cout<<"Revise the score: ";
		cin>>score;
		display();
	}
};

void Student::display()
{
	cout<<"num: "<<num<<endl;
	cout<<"score: "<<score<<endl;
}
	
void Student::set()
{
	cout<<"score: ";
	cin>>score;
	cout<<"num:";
	cin>>num;
	cout<<endl;
	display();
}	

	
int main()
{	
	Student stud1;
	stud1.set();

/*	int a,c, *p;
	p=&a;
	a=6;	*p=9;		
	int &b=a;
	b=8;			
	cout<<a<<endl;			*/
	
	cout<<"***********"<<endl;
//	Student *ps;	
//	ps = & stud1;
//	ps->revise();
//	cin>>stud1.score;
//	(*ps).display();
	//cout<<(*ps).num<<endl;
//	stud1.display();
//	(*ps).display();
//	ps->display();
//	stud1.display();	
	
	Student &stud2 = stud1;
	stud2.display();


	return 0;
} 
