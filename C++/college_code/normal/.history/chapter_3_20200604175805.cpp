/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-06-04 17:04:52
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-06-04 17:58:05
 */ 
// #include <iostream>
// using namespace std;
// class Student
// {
// public:
// 	int id;
// 	double score;

	
// 	Student(int i,double s)
// 		{
// 			i=id;
// 			s=score;
// 		}

// };

// void max(Student *a)
// {
// 	int i,j;
//     j=a[0].id;
//     double k;
//     k=a[0].score;
// 	for(i=1;i<5;i++)
// 	{
// 		if(k<a[i].score) 
// 		{
// 			k=a[i].score;
// 			j=a[i].id;
// 		}
// 	}
// 	cout << "ID=" << j  << endl<< "SCORE=" << k << endl;
// }

// int main()
// {
// 	Student Stud[5]={
// 		Student(1,32),
// 		Student(2,46),
// 		Student(3,65),
// 		Student(4,77),
// 		Student(5,89)
		
// 	};
	
// 	Student *p = &Stud[0];
// 	max(p);
// 	return 0;
// }
#include<iostream>
using namespace std;
class Student
{
	public:
		Student(int n,int s):num(n),score(s){}
	int num;
	int score;
} ;
 
  void max(Student*arr)
 {
 	int max_score=arr[0].score;
 	int k=0;
 	for(int i=1;i<5;i++)
 	{
 		if(arr[i].score>arr[0].score)
 		{
 			max_score=arr[i].score;
 			k=i;
		 }
	 }
	 cout<<arr[k].num<<":"<<max_score<<endl;
 }
 int main()
{
	Student std[5]={
	Student(01,98),Student(02,93),Student(03,87),Student(04,95),Student(05,89)};
	void max(Student*);
	 Student *p=&std[0];
	max(p);
}