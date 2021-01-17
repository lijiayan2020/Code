/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-06-17 18:24:04
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-06-17 18:24:05
 */ 
#include<iostream>
#include "Point.h"
using namespace std;

Point::Point(float a, float b)
{
    x=a;
    y=b;
}
float Point::getX()
{
    return x;
}
float Point::getY()
{
    return y;
}
void Point::setPoint(float a,float b)
{
    x=a;
    y=b;
}

ostream& operator<<(ostream &output, const Point &p)
{
    output << "(" <<p.x << "," < p.y << "")" << endl;
    return output;
}