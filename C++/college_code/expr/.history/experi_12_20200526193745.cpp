/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-04-15 22:58:43
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-05-26 19:31:10
 */ 
// 1. 定义一个组合类课程类Lesson，其数据成员有：课号id，课程名name，任课老师teacher，选课学生s，
// 其中学生信息定义成学生类的数组。
// 成员函数有：AddStudent增加选课学生信息，GetPassRate计算课程的及格率，ShowInfo显示课程信息。
//学生类包括学号、姓名及该门课的成绩。用上述类的组合实现课程的管理。
#include<iostream>
#include<string>
using namespace std;

//课程类
class Lesson
{
private:
    
    
    char id[7];//课号
    char name=[7];//课程名
    char teacher[7];//任教老师
    Student s[56];//选课学生
    
public:
    Lesson(char ids[],char names[],char teachers[])
    {
        //两个数组的相等使用strcpy--string_copy
        strcpy(id,ids);
        strcpy(name,names);
        strcpy(teacher,teachers);
    }
    void AddStudent()//增加选课学生信息
    {
        char idn[2];
        char namen[7];
        char teachern[7];
        
        for(int i=0;i<2;i++)
        {
            cout << "Please enter information of 'id' about student." << endl;
            cout << "id:"; cin >> idn[i];
        }
        for(int i=0;i<2;i++)
        {
            cout << "Please enter information of 'name' about student." << endl;
            cout << "name:"; cin >> namen[i];
        }
        for(int i=0;i<2;i++)
        {
            cout << "Please enter information of 'teacher' about student." << endl;
            cout << "teacher:"; cin >> teachern[i];
        }
        for(int i=0;i<2;i++)
        {
            s[i].student(idn,namen,teachern);
        }
    };
    void GetPassRate()//计算课程的及格率
    {
        
    };
    void ShowInfo()//显示课程信息
    {

    }



};
//学生类
class Student
{
private:
    char ID[2];//学号
    char Name[2];//姓名
    char Score[2];//该门课的成绩
public:
    student(char IDs[],Names[],char Scores[])
    {
        strcpy(ID=IDs);
        strcpy(Name=Names);
        strcpy(Score=Scores);
    }


};
int main()