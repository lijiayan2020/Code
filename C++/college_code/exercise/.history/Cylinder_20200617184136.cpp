/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-06-17 18:41:10
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-06-17 18:41:35
 */ 
 1 #include<iostream>
 2 #include"Cylinder.h"
 3 using namespace std;
 4 
 5 Cylinder::Cylinder(float a, float b, float r, float h) :Circle(a, b, r), height(h) { }
 6 
 7 void Cylinder::setH(float h)
 8 {
 9     height = h;
10 }
11 
12 float Cylinder::getH()
13 {
14     return height;
15 }
16 
17 float Cylinder::area()
18 {
19     return 2 * Circle::area() + 2 * 3.14*radius*height;
20 }
21 
22 float Cylinder::volume()
23 {
24     return Circle::area()*height;
25 }
26 
27 ostream& operator<<(ostream &output, Cylinder &cy)    //cy.area() 属于同名覆盖
 {
     output << "圆心：(" << cy.x << "," << cy.y << ")   半径：" << cy.radius << "  高：" << cy.height << "\n                  面积: " << cy.area() << "   体积:" << cy.volume() << endl;
     return output;
}