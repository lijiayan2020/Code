//类和对象 //不提倡无类名定义对象 
#include <iostream>
using namespace std;
int main()
{
	
	class Student
	{public:
		int num;
		int score;
		void display()
		{
		cout << "num:" << num << endl;
		}
	}/*stud2*/;
	void Student::display()
	{
	}
	
	
	Student stud1;				//常用定义对象的方式 
								//	//class Student stud3;
								//结构体	struct 定义类，不常用，默认private
								// class 默认public 
		
	return 0;
	
}
