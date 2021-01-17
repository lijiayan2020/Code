////谭浩强的C++ p118 第二、
//#include <iostream>
//using namespace std; 
//class Time 
//{ 
//private:
//	int hour; int minute; int sec;
//public:
//	void input_time()
//	{
//		
//		cin >> hour; 
//		cin >>  minute; 
//		cin >>sec;
//		
//	};
//	void show_time()
//	{
//		cout <<hour<<":"<< minute<<":"<< sec << endl;
//	};  
//};
//int main()
//{
//	Time tl;
//	tl.input_time();
//	tl.show_time();
//	return 0;
// } 






//三题 
//#include <iostream>
//using namespace std; 
//class Time 
//{ 
//private:
//	int hour; int minute; int sec;
//public:
//	void input_time();
//	void show_time();
//};
//void Time::input_time()
//	{
//		
//		cin >> hour; 
//		cin >>  minute; 
//		cin >>sec;
//		
//	}
//void Time::show_time()
//	{
//		cout <<hour<<":"<< minute<<":"<< sec << endl;
//	}
//int main()
//{
//	Time tl;
//	tl.input_time();
//	tl.show_time();
//	return 0;
// } 
// 





//6 需要求3个长方柱的体积，诸编写一个基于对象的程序。 数据成员包括 length （长）、width(宽） 、 height(高）。
// 要求用成员函数实现以下功能： 
// (1) 由键盘分别输人3个长方柱的长、宽、高； 
// (2) 计算长方柱的体积；
//  (3) 输出3个长方柱的体积。 请编程序，上机调试并运行。  
#include<iostream>
using namespace std;
class Volume
{
private:
	double length;
	double width;
	double height;
	int a;
public:
	void input_lwh();
	int cal_v();
	void show_v();	
 } ;
 void Volume::input_lwh()
 {
 	cout << "Please enter length:"; cin >> length;
 	cout << "Please enter width:"; cin >> width;
 	cout << "Please enter height:"; cin >> height;
 }
 void Volume::show_v()
 {
 	cout << "V=" << a;
 }
 int Volume::cal_v()
{
	a =  length*width*height;
 } 
 int main()
 {
 	Volume v1;
 	v1.input_lwh();
 	v1.cal_v();
 	v1.show_v();
 	return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
