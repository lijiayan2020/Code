#include <iostream>
#include <string>
using namespace std;
class Birthday
{protected:
	int year, month, day;
public:
	Birthday(int y,int m,int d):year(y),month(m),day(d){cout<<"Birthday constructed"<<endl;};
	~Birthday(){cout<<"Birthday deconstructed"<<endl;}
	void display() {cout<<"Birthday: "<<month<<"/"<<day<<"/"<<year<<endl;	}
};

class Person
{protected:
	string name;
	char sex;
	Birthday birth;
	static int number;
public:
	Person(string nam, char s,int y,int m,int d):\
	birth(y,m,d),name(nam),sex(s)
	{	number+=1;
		cout<<"Person constructed: "<<number<<endl;}
	virtual ~Person(){cout<<"Person deconstructed"<<endl;	}
	virtual void show() 
	{	cout<<"Name: "<<name<<endl;birth.display();
		cout<<"Sex: "<<sex<<endl;};
};
int Person::number =0;


class Student: virtual public Person
{protected:
	float score;
public:
	Student(string nam,char s,float sco,int y,int m,int d):\
	Person(nam,s,y,m,d),score(sco) {cout<<"Student constructed"<<endl;}
	~Student() {cout<<"Student deconstructed"<<endl;}
	void show(){Person::show();cout<<"Score: "<<score<<endl;}
};

class Teacher: virtual public Person
{protected:
	string title;
public:
	Teacher(string nam,char s,string tit,int y,int m,int d):\
	Person(nam,s,y,m,d),title(tit) {cout<<"Teacher constructed"<<endl;}
	~Teacher(){cout<<"Teacher deconstructed"<<endl;	}
	void show(){Person::show();cout<<"Title: "<<title<<endl;}	
};

class Graduate: public Student, public Teacher
{protected:
	float wage;
public:
	Graduate(string nam,char s,float sco,string tit,float w,int y,int m,int d):\
	Person(nam,s,y,m,d),Student(nam,s,sco,y,m,d),Teacher(nam,s,tit,y,m,d),wage(w) 
	{cout<<"Graduate constructed: "<<endl;	}
	~Graduate(){cout<<"Graduate deconstructed"<<endl;}
	void show(){Person::show();cout<<"Score: "<<score<<endl<<\
	"Title: "<<title<<endl<<"Wage: "<<wage<<endl;	}
};

int main ()
{
	Person *pt;
	Graduate g1("Wang",'f',88.5,"Professor",2400,1998,4,1);
	pt = &g1;
	pt->show();	
	return 0;
}

