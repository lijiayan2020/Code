// /*
//  * @Description: 
//  * @version: 
//  * @Author: LiJiayan
//  * @Date: 2020-06-16 23:13:48
//  * @LastEditors: LiJiayan
//  * @LastEditTime: 2020-06-17 18:14:26
//  */ 

#ifndef POINT_H
#define POINT_H

#include<iostream>
using namespace std;
class Point
{
public:
    Point(float x=0, float y=0);
    void setPoint(float,float);
    float getX();
    float getY();
    friend ostream & operator << (ostream &output, const Point &);
protected:
    float x,y;

};

#endif