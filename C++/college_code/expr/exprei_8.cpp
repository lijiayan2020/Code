//�ˡ��������ʵ�飨4ѧʱ��



//1������һ��ѧ����Student������3�����ݳ�Ա��ѧ��id������name������score��������̬���ݳ�Ա���ܷ�total��ѧ������count���������Ĺ��캯��������ʼ�����󣬳�Ա����ChangeScore�����޸ķ�������̬��Ա����GetAverage������ӡ����õ���ƽ���֡�

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Student
//{public:
//	Student(int id, string name, double score):id(id), name(name), score(score){total+=score; count++;}                         //�������캯�� 
//	void ChangeScore(double change);                             //������Ա���� 
//	static double GetAverage();                         //������̬��Ա���� 
//	static double total;                                 //������̬���ݳ�Ա 
//	static int count;                     //������̬���ݳ�Ա 
//    
//private:
//	double score;
//	int id;
//	string name;
//	
//};
//
////����Ǿ�̬��Ա���� 
//void Student::ChangeScore(double change)
//{
//	 total=total-score+change;
//	 score=change;
//}
////���徲̬������Ա 
//double Student::GetAverage()
//{
//	
//	return(total/count);
// } 
////��ʼ����̬���ݳ�Ա 
// double Student::total = 0.0f; 
// int Student::count = 0; 
// //������
// int main()
// {
// 	
//	Student st1(002,"����",99);
//	Student st2(003,"����",98);
//	Student st3(003,"����",97);
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



















//2. ����3.13�е�Time������ΪDate�����Ԫ�࣬ͨ��Time���е�display��������Date������˽�����ݣ�����ꡢ�¡��պ�ʱ���֡��롣

#include <iostream>
using namespace std;
class Date;
//����Time��
class Time
{public:
	Time (int h, int m, int s):hour(h),minute(m),sec(s) {};//�������캯��
	void display(Date &);//display�ǳ�Ա�������β���Date����������
	private://��Date�����ǰ��������
		int hour;
		int minute;
		int sec;
};

class Date//����Date��
{
friend  Time; //���� Time��ΪDate�����Ԫ�� 
public:
	Date(int y, int m,int d):year(y),month(m),day(d){}; //�������캯��
	


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

















