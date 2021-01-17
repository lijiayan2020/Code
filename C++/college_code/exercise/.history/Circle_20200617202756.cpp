/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-06-17 18:33:43
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-06-17 20:27:56
 */ 
#include<iostream>
#include "Circle.h"
using namespace std;

Circle :: Circle(float a, float b, float r) : Point(a,b), radius(r){}

float Circle :: getR()
{
    return radius;
}

void Circle :: setR(float r)
{
    radius = r;
}
float Circle::area()
{
    return 3.14*radius*radius;
}
ostream& operator<<(ostream &output, Circle &c)
{
    output << "O:" (" << c.x << "," << c.y ")  R:"<<c,radius <<" S:"<< c.area() <<endl;
    return output;
}