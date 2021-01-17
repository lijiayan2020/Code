/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-06-16 23:19:33
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-06-17 18:14:05
 */ 

#ifndef CIRCLE_H
#define CIRCLE_H

#include<iostream>
using namespace std;
class Circle : public Point
{
public:
    Circle(float a=0, float b=0, float r=0);
    float getR();
    void setR(float r);
    float area();
    friend ostream& operator<<(ostream &output, Circle &c);
protected:
    float radius;
};

#endif