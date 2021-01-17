/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-06-16 23:22:28
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-06-17 20:30:23
 */ 
#ifndef CYLINDER_H
#define CYLINDER_H

#include "Circle.h"

class Cylinder : public Circle
{
public:
    Cylinder(float a=0,float b=0, float r=0, float h=0);
    void setH(float h);
    float getH();
    float area();
    float volume();
    friend ostream& operator<<(ostream&,Cylinder &);
private:
    float height;
};

#endif