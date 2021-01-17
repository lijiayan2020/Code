/*
 * @Description: 多态和虚函数
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-04-15 23:01:43
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-05-17 23:30:55
 */ 
//十三、虚函数和多态性实验（4学时）
//1．计算几种不同的三维图形的表面积和体积，这里定义一个抽象类Cshape，将其成员函数显示基本图形信息函数DispAttr()、计算表面积函数Sarea()、计算体积函数Volume()定义为虚函数。
//根据此抽象类派生出球体、正方体、长方体和圆柱体，并分别重新实现基类中的纯虚函数来显示输出计算结果。
//
#include<iostream>
using namespace std;
//定义抽象类
class Cshape
{public:
    Cshape();
    virtual void DispAttr()=0;
    virtual double Sarea()=0;
    virtual double Volume()=0;
    double r;
    double v;
    double s;
    double h;
    double l;
    double w;
};

//定义球体类
class Globe:public Cshape
{public:
    
    Globe()
    {
        cout << "这是一个球体的信息。"<< endl;
        
    }
    virtual void DispAttr()
    {
        
        
        cout << "半径:" << r << endl;
        cout << "表面积" << Sarea() << endl;
        cout << "体积：" << Volume() << endl;
    
    }
    virtual double Sarea()
    {
        s = 3.14*r*r;
        return s;
    }
    virtual double Volume()
    {
        v= (4.0/3)*3.14*r*r*r;
        return v;
    }

    

};
void test01()
{
    Cshape * g1 = new Globe;
    g1->r=3;
    g1->DispAttr();
    delete g1;

}
int main()
{
    test01();
    return 0;
}
