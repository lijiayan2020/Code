////̷��ǿ��C++ p118 �ڶ���
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






//���� 
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





//6 ��Ҫ��3������������������дһ�����ڶ���ĳ��� ���ݳ�Ա���� length ��������width(�� �� height(�ߣ���
// Ҫ���ó�Ա����ʵ�����¹��ܣ� 
// (1) �ɼ��̷ֱ�����3���������ĳ������ߣ� 
// (2) ���㳤�����������
//  (3) ���3��������������� �������ϻ����Բ����С�  
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
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
