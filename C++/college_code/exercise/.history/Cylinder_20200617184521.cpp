/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-06-17 18:41:10
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-06-17 18:45:21
 */ 
#include<iostream>
#include"Cylinder.h"
using namespace std;

Cylinder::Cylinder(float a, float b, float r, float h) :Circle(a, b, r), height(h) { }

void Cylinder::setH(float h)
{
    height = h;
}
float Cylinder::getH()
{
    return height;
}

float Cylinder::area()
{
     return 2 * Circle::area() + 2 * 3.14*radius*height;
}

float Cylinder::volume()
{
    return Circle::area()*height;
}

ostream& operator<<(ostream &output, Cylinder &cy)    //cy.area() 属于同名覆盖
{
    output << "圆心：(" << cy.x << "," << cy.y << ")   半径：" << cy.radius << "  高：" << cy.height << "\n 面积: " << cy.area() << "   体积:" << cy.volume() << endl;
    return output;
}