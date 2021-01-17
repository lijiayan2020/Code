#include <iostream>
#include <string>

using namespace std;
class Person;
class Birthday
{protected:
	int year, month, day;
public:
	friend Person;
	Birthday(int y,int m,int d):year(y),month(m),day(d){}//cout<<"Birthday constructed"<<endl;};
	~Birthday(){}//cout<<"Birthday deconstructed"<<endl;}
	void display() {cout<<"Birthday: "<<month<<"/"<<day<<"/"<<year<<endl;	}
};

class Person
{protected:
	string name;
	char sex;
public:
	static int number;
	Person(string nam, char s):name(nam),sex(s)
	{	number+=1;}
	//	cout<<"Person constructed: "<<number<<endl;}
	virtual ~Person(){}//cout<<"Person deconstructed"<<endl;	}
	virtual void show(Birthday &birth) 
	{	cout<<"Name: "<<name<<endl; 
		birth.display();
		cout<<"Sex: "<<sex<<endl;};
	virtual void show() 
	{	cout<<"Name: "<<name<<endl<<"Sex: "<<sex<<endl;};
};
int Person::number =0;


class Student: virtual public Person
{protected:
	float score;
public:
	static int snumber;
	Student(string nam,char s,float sco):\
	Person(nam,s),score(sco) {snumber+=1;}//cout<<"Student constructed"<<endl;}
	~Student() {}//cout<<"Student deconstructed"<<endl;}
	void show(Birthday &birth){Person::show(birth);cout<<"Score: "<<score<<endl;}
	void show(){Person::show();cout<<"Score: "<<score<<endl;}
};
int Student::snumber=0;

class Teacher: virtual public Person
{protected:
	string title;	
public:
	static int tnumber;
	Teacher(string nam,char s,string tit):\
	Person(nam,s),title(tit) {tnumber+=1;}//cout<<"Teacher constructed"<<endl;}
	~Teacher(){}//cout<<"Teacher deconstructed"<<endl;	}
	void show(Birthday &birth){Person::show(birth);cout<<"Title: "<<title<<endl;}
	void show(){Person::show();cout<<"Title: "<<title<<endl;}		
};
int Teacher::tnumber=0;

class Graduate:public Student, public Teacher
{protected:
	float wage;
public:
	static int gnumber;
	Graduate(string nam,char s,float sco,string tit,float w):\
	Person(nam,s),Student(nam,s,sco),Teacher(nam,s,tit),wage(w) 
	{gnumber+=1;}//cout<<"Graduate constructed: "<<endl;	}
	~Graduate(){}//cout<<"Graduate deconstructed"<<endl;}
	void show(Birthday &birth){Person::show(birth);
	cout<<"Score: "<<score<<endl<<"Title: "<<title<<endl<<"Wage: "<<wage<<endl;}
	void show(){cout<<"Score: "<<score<<endl<<"Title: "<<\
	title<<endl<<"Wage: "<<wage<<endl;}
};
int Graduate::gnumber=0;

int main ()
{
	Person *pt;
	Student s1("Wang",'f',88.5),s2 ("Zhao",'m',76);
	Birthday bs1(1998,4,1);
	pt = &s1;
	pt->show(bs1); cout<<endl;
	Graduate g1("Qian",'f',89,"Assis",2400),g2("Sun",'m',96,"Assis",1200);
	Birthday bg2(1991,2,2);
	pt = &g2;
	pt->show(bg2); cout<<endl;
	Teacher t1("Li",'m',"Prof");
	Birthday bt1(1984,9,9);
	pt = &t1;
	pt->show(bt1);	cout<<endl;
	cout<<"The number of Person: "<<Person::number<<endl\
	<<"The number of Teacher: "<<Teacher::tnumber-Graduate::gnumber<<endl\
	<<"The number of Graduate: "<<Graduate::gnumber<<endl\
	<<"The number of Student: "<<Student::snumber-Graduate::gnumber<<endl;

	return 0;
}

