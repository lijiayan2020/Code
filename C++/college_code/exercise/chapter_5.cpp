/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-06-15 09:19:32
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-06-16 22:46:45
 */ 

// 1.将例5.1的程序片断补充和改写成一个完整、正确的程序，用公用继承方式。在程序中应包括输入数据的函数，在程序运行时输入num，name，sex，age，addr的值，程序应输出以上5个数据的值。

// #include<iostream>
// #include<string>
// using namespace std;
// class Student
// {public:
//     void get_value ( )
//         {cin >> num >> name >> sex;} 
//     void display ( )
//     {
//         cout << "num:  "<< num << endl ; 
//         cout << "name:" << name << endl;
//         cout << "sex:" << sex << endl;
//     }
// private:
//     int num; 
//     string name ; 
//     char sex;

// };

// class Studentl : public Student

// {public: 
//     void get value 1 ( )
//         {cin >> age >> addr; } 
//     void display 1 ( )
//     { 
//         cout << " num: " <<num << endl; 
//         cout << " name : " << name << endl ; 
//         cout << " sex:"<<sex << endl;
// 	cout << " age :"<<	age<< endl 	;

// " << addr << endl; cout << " address :

// Private :

// int age; string addr;
// }







//8
#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "con A" << endl;
        
    }
    ~A()
    {
        cout << "des A" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "con B" << endl;
        
    }
    ~B()
    {
        cout << "des B" << endl;
    }
};

class C : public B
{
public:
    C()
    {
        cout << "con C" << endl;
        
    }
    ~C()
    {
        cout << "des C" << endl;
    }
};

int main()
{
    C c1;
    return 0;
}