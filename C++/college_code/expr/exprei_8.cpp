//八、类与对象实验（4学时）



//1．定义一个学生类Student，包括3个数据成员：学号id，姓名name，分数score；两个静态数据成员：总分total和学生人数count；带参数的构造函数用来初始化对象，成员函数ChangeScore用来修改分数，静态成员函数GetAverage用来打印计算得到的平均分。

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Student
//{public:
//	Student(int id, string name, double score):id(id), name(name), score(score){total+=score; count++;}                         //声明构造函数 
//	void ChangeScore(double change);                             //声明成员函数 
//	static double GetAverage();                         //声明静态成员函数 
//	static double total;                                 //声明静态数据成员 
//	static int count;                     //声明静态数据成员 
//    
//private:
//	double score;
//	int id;
//	string name;
//	
//};
//
////定义非静态成员函数 
//void Student::ChangeScore(double change)
//{
//	 total=total-score+change;
//	 score=change;
//}
////定义静态函数成员 
//double Student::GetAverage()
//{
//	
//	return(total/count);
// } 
////初始化静态数据成员 
// double Student::total = 0.0f; 
// int Student::count = 0; 
// //主函数
// int main()
// {
// 	
//	Student st1(002,"张三",99);
//	Student st2(003,"赵四",98);
//	Student st3(003,"王五",97);
//	 	
//	  
//	 
//	 int n;
//	 
//	 cout << "The average score of " << 3 << " students is " << Student::GetAverage() << endl;
//	 
//	 st1.ChangeScore(120);
//	 st2.ChangeScore(100);
//	 cout << "The average score of " << 3 << " students is " << Student::GetAverage() << endl;
//	 return 0;
//  } 



















//2. 将例3.13中的Time类声明为Date类的友元类，通过Time类中的display函数引用Date类对象的私有数据，输出年、月、日和时、分、秒。

#include <iostream>
using namespace std;
class Date;
//声明Time类
class Time
{public:
	Time (int h, int m, int s):hour(h),minute(m),sec(s) {};//声明构造函数
	void display(Date &);//display是成员函数，形参是Date类对象的引用
	private://对Date类的提前引用声明
		int hour;
		int minute;
		int sec;
};

class Date//声明Date类
{
friend  Time; //声明 Time类为Date类的友元类 
public:
	Date(int y, int m,int d):year(y),month(m),day(d){}; //声明构造函数
	


private:
	int month;
	int day;
	int year;

}; 

void Time::display(Date &a)
{
	cout << a.year <<" /" << a.month << " /" << a.day << " \n" << hour << " : " << minute << " : " << sec << endl; 
}
int main()
{
	Date d1(2020,05,12);
	Time t1(21,05,35);
	t1.display(d1);
	return 0;
}

















