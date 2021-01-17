#include <iostream>
using namespace std;
class Student
{
public:
	int id;
	double score;

	
	Student(int i,double s)
		{
			i=id;
			s=score;
		}

};

void max(Student *a)
{
	int i,j=a[0].id,k=a[0].score;
	for(i=1;i<5;i++)
	{
		if(k<a[i].score) 
		{
			k=a[i].score;
			j=a[i].id;
		}
	}
	cout << "ID=" << j  << endl<< "SCORE=" << k << endl;
}

int main()
{
	Student Stud[5]={
		Student(1,32),
		Student(2,46),
		Student(3,65),
		Student(4,77),
		Student(5,89)
		
	};
	
	Student *p = &Stud[0];
	max(p);
	return 0;
}