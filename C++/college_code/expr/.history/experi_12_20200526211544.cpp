/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-04-15 22:58:43
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-05-26 21:15:44
 */ 
// 1. 定义一个组合类课程类Lesson，其数据成员有：课号id，课程名name，任课老师teacher，选课学生s，
// 其中学生信息定义成学生类的数组。
// 成员函数有：AddStudent增加选课学生信息，GetPassRate计算课程的及格率，ShowInfo显示课程信息。
//学生类包括学号、姓名及该门课的成绩。用上述类的组合实现课程的管理。
#include<iostream>
#include<string>
#include <cstring>
#include<stdlib.h>
using namespace std;
int f=0,t=0;



//学生类
class Student
{
private:
    char ID[10];//学号
    char Name[4];//姓名
    double Score;//该门课的成绩
public:
    void student(char IDs[],char Names[],double Scores)
    {
        char* strcpy(char *ID=const char*IDs);
        char* strcpy(char* Name=const char*Names);
        Score=Scores;
        if(Score>=60)
            t++;
        else f++;
    }
    void show()
    {
        cout << "ID:" << ID << endl; 
        cout << "name:" << Name << endl;
        cout << "score:" << Score  << endl;
    }
};

//课程类
class Lesson
{
private:
    
    
    char id[7];//课号
    char name=[5];//课程名
    char teacher[5];//任教老师
    Student s[56];//选课学生
    
public:
    Lesson(char ids[],char names[],char teachers[])
    {
        //两个数组的相等使用strcpy--string_copy
        strcpy(id,ids);
        strcpy(name,names);
        strcpy(teacher,teachers);
    }
    int i;//用于计算人数
    void AddStudent()//增加选课学生信息
    {
        char idn[10];
        char namen[10];
        double scoren;
        char j[2];
        
        for(i=0;i<56;i++)
        {
            cout << "Please enter information of 'id' about student." << endl;
            cout << "id:"; cin >> idn[i];
        
        
            cout << "Please enter information of 'name' about student." << endl;
            cout << "name:"; cin >> namen[i];
        
        
        
            cout << "Please enter information of 'score' about student." << endl;
            cout << "score:"; cin >> scoren;
        
        
        
            s[i].student(idn,namen,scoren);

            cout << "Enter 'q' to quit.";
            cin >> j;
            if(j[2]=='q')
                break;

        }
    }
    void GetPassRate()//计算课程的及格率
    {
        int all;
        all=f+t;
        cout << "passrate:" << double(t)/all << endl;
    }
    void ShowInfo()//显示课程信息
    {
        cout << "Information of  Class" << endl;
        cout << "Class ID:" << id << endl;
        cout << "Class Name:" << name << endl;
        cout << "Teacher" << teacher << endl;

        cout << "Information of Student" << endl;
        for(int k=0;k<=i;k++)
        {
            s[k].show();

        }
    }



};

int main()
{
    Lesson l1("1","C++","Han");
    l1.AddStudent();
    l1.GetPassRate();
    l1.ShowInfo();
    return 0;
}