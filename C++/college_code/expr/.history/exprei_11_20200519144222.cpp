/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-04-15 22:58:42
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-05-19 14:42:22
 */ 
//十一、继承与派生实验（4学时）
//1. 定义一个本科生类Undergraduate，包括学号、姓名、专业这三个数据成员，
// 在此基础上派生出研究类Graduate，并增加导师、发表论文数等属性，可以通过显示个人信息函数ShowInfo来查个人档案。

#include<iostream>
#include<string>
using namespace std;
class Undergraduate
{
private:
    int id;
    string name;
    string profession;
public:
    
    void ShowInfo()
    {
        cout << "Name:" << name << endl;
        cout << "ID:" << id << endl;
        cout << "profession:" << profession << endl;
    }
}
class Graduate : public Undergraduate
{
private:
    int id;
    string name;
    string profession;  
    
    string tutor;
    int essay_sum;

    void ShowInfo()
    {
        cout << "Name:" << name << endl;
        cout << "ID:" << id << endl;
        cout << "profession:" << profession << endl;
        cout << "tutor:" << tutor <<  endl;
        cout << "Essay Number:" << essay_num << endl;
    }
}
void test01()
{
    Undergraduate u1;
    u1.name="LiJiayan";
    u1.id=2019070918;
    u1.profession="digital information";
    Graduate g1;
    g1.name="ZhangBo";
    g1.id=1991;
    g1.profession="software engineering";
    g1.tutor="LiJiayan";
    g1.essay_num=100;
    u1.ShowInfo();
    g1.ShowInfo();

}

int main()
{
    test01();
    return 0;
}




//2. 定义一个学生类Student和教师类Teacher，学生类的数据成员有姓名、学生、专业，
// 教师类的数据成员有姓名、工作证号、职称、课程、每周课时数。
// 再定义一个助教类TA，继承学生类和教师类，该类可以使用学生类的全部数据成员以及教师类的课程和每周课时数的数据成员。
// 要求：每个类提供自定义的构造函数和析构函数，并通过同名函数ShowInfo来显示全部数据成员的值。

