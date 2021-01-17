/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-06-17 18:24:04
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-06-17 18:31:32
 */ 
#include<iostream>
#include "Point.h"
using namespace std;

Point::Point(float a, float b)
{
    x=a;
    y=b;
}
float getX()
{
    return x;
}
float getY()
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
    output << "(" <<p.x << "," << p.y << ")" << endl;
    return output;
}