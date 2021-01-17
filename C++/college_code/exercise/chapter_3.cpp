//5.²»»á 
//#include <iostream>
//using namespace std;
//class Student
//{
//public:
//	int id;
//	double score;
//
//	
//	Student(int i,double s)
//		{
//			i=id;
//			s=score;
//		}
//
//};
//
//void max(Student *a)
//{
//	int i,j=a[0].id;
//	double k=a[0].score;
//	for(i=1;i<5;i++)
//	{
//		if(k<a[i].score) 
//		{
//			k=a[i].score;
//			j=a[i].id;
//		}
//	}
//	cout << "ID=" << j << endl<< "SCORE=" << k << endl;
//}
//
//int main()
//{
//	Student stud[5]={
//		Student(1,32),
//		Student(2,46),
//		Student(3,65),
//		Student(4,77),
//		Student(5,89)
//		
//	};
//
//	Student *p = &stud[0];
//	max(p);
//	return 0;
//}


//8.
#include<iostream>
using namespace std;
class Student
{
public:
	Student(int n,float s):num(n),score(s){}
	void change(int n,float s){num=n;score=s;	}
	void display(){cout << num << " " << score << endl;}
private:
		int num;
		float score;
	
};
void fun(Student &s)
{
	s.change(101,80.5);
	s.display();
	
}
int main()
{
	Student stud(101,78.5);
	
	stud.display();
	
	fun(stud);
	return 0;
 } 















