//����
#include<iostream>
using namespace std;
class Student
{private:
	int num;
	int score;
//	inline void display()//inline ���ú��� 
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
//	ps->set();//�ȼ���¥�� 

	
//	int a=6;
//	int &b=a//ȡ��ַ��������߾������ã��ұ߾��ǵ�ַ 
//	//b��a������ ����������Ҫָ�����ö��� 
//	
//	stud1.display();	
} 
