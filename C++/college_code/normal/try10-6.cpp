#include <iostream>
#include <string>
using namespace std;
class Teacher
{
	public:
		Teacher(int n,string nam, char s):num(n),sex(s)
		{	name=nam;		}
	protected:
		int num;
		string name;
		char sex;
} ;
class BirthDate
{
	public:
		BirthDate(int y,int m,int d)
		{year=y;	month=m;	day=d;		} 
		void show()
		{
			cout<<"Birthday: "<<month<<"/"<<day<<"/"<<year<<endl;				
		}
	private:
		int year, month, day;
};
class Professor: public Teacher
{
	private:
		BirthDate birthday;
	public:
		Professor(int n,string nam,char s,int y, int m,int d):\
		Teacher(n,nam,s),birthday(y,m,d) 		{	}
		void display()
		{
			cout<<"num: "<<num<<endl;
			cout<<"name: "<<name<<endl;
			cout<<"sex: "<<sex<<endl;
			birthday.show(); 
		}
};

int main()
{
	Professor pf1(101,"Wang",'m',1980,1,1);
	pf1.display();
	return 0;
}
