/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-06-16 23:03:33
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-06-19 19:55:39
 */ 

// 1
// #include<iostream>
// #include "Point.h"
// #include "Circle.h"
// #include "Cylinder.h"
// using namespace std;
// int main()
// {
    
//     Cylinder cy(1,1,1,2);
//     cout << cy <<endl;
//     cy.setPoint(0,0);
//     cy.setR(2);
//     cy.setH(1);
//     cout << cy <<endl;
//     Point &p=cy;
//     cout << p<< endl;
//     Circle &c=cy;
//     cout << c << endl;
//     return 0;
// }


// 3
#include<iostream>
using namespace std;
class Point
{
public:
    Point(float a ,float b){x=a;y=b;}
    ~Point()
    {
        cout << "executing Point destructor" << endl;
    }
private:
    float x;
    float y;
};
class Circle :public Point
{
public:
    Circle(float a, float b, float r):Point(a,b),radius(r){}
    ~Circle()
    {
        cout << "executing Circle destructor" << endl;
    }    
private:
    int radius;
};

int main()
{
    Point *p = new Circle(1,1,2);
    delete p;
    Circle *pr = new Circle(2,2,1);
    delete pr;
    
    
    return 0;
}
