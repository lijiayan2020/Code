//��Ͷ��� //���ᳫ������������� 
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
	
	
	Student stud1;				//���ö������ķ�ʽ 
								//	//class Student stud3;
								//�ṹ��	struct �����࣬�����ã�Ĭ��private
								// class Ĭ��public 
		
	return 0;
	
}
