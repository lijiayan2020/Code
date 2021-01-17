/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-06-15 09:19:32
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-06-15 09:29:40
 */ 
#include<iostream>
#include<string>
using namespace std;
class Student
{public:
    void get_value ( )
        {cin >> num >> name >> sex;} 
    void display ( )
    {
        cout << "num:  "<< num << endl ; 
        cout << "name:" << name << endl;
        cout << "sex:" << sex << endl;
    }
private:
    int num; 
    string name ; 
    char sex;

};

class Studentl : public Student

{public: 
    void get value 1 ( )
        {cin >> age >> addr; } 
    void display 1 ( )
    { 
        cout << " num: " <<num << endl; 
        cout << " name : " << name << endl ; 
        cout << " sex:"<<sex << endl;
	cout << " age :"<<	age<< endl 	;

" << addr << endl; cout << " address :

Private :

int age; string addr;
}