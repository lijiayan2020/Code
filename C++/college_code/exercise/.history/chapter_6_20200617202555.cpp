/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-06-16 23:03:33
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-06-17 20:25:55
 */ 
// #include<iostream>
// #include "Point.h"
// #include "Circle.h"
#include "Cylinder.h"
using namespace std;
int main()
{
    
    Cylinder cy(1,1,1,2);
    cout << cy <<endl;
    cy.setPoint(0,0);
    cy.setR(2);
    cy.setH(1);
    cout << cy <<endl;
    Point &p=cy;
    cout << p<< endl;
    Circle &c=cy;
    cout << c << endl;
    return 0;
}