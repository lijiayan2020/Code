//函数
#include<iostream>
using namespace std;
class Student
{private:
	int num;
	int score;
//	inline void display()//inline 内置函数 
public:
	void set();
	void display();

};

void Student::set()
{
	cout <<"score:";
	cin >> score;
	cout <<"num:";
	cin >> num;
	display();
	
}
void Student::display()

{
	cout <<"num" <<num <<endl;
	cout <<"score:"<<score <<endl;
	
}
int main()
{
	Student stud1; 
	stud1.set();
	//*ps;
	Student &stud2=stud1;
	stud2.display();
	
//	ps = &stud1;
//	(*ps).set();
//	ps->set();//等价于楼上 

	
//	int a=6;
//	int &b=a//取地址符号在左边就是引用，右边就是地址 
//	//b是a的引用 ，定义必须就要指明引用对象 
//	
//	stud1.display();	
} 
