/*
 * @Description: 多态和虚函数
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-04-15 23:01:43
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-05-17 22:47:31
 */ 
//十三、虚函数和多态性实验（4学时）
//1．计算几种不同的三维图形的表面积和体积，这里定义一个抽象类Cshape，将其成员函数显示基本图形信息函数DispAttr()、计算表面积函数Sarea()、计算体积函数Volume()定义为虚函数。
//根据此抽象类派生出球体、正方体、长方体和圆柱体，并分别重新实现基类中的纯虚函数来显示输出计算结果。
//
#include<iostream>
using namespace std;
class Cshape
{public:
    
    virtual void DispAttr()=0;
    virtual double Sarea()=0;
    virtual double Volume()=0;
};
class Globe:public Cshape
{public:
    void DispAttr(double r)
    {
        
        cout << "这是一个球体的信息" << endl;
        cout << "半径:" << r << endl;
        cout << "面积：" << s << endl;
        cout << "体积：" << v << endl;
    
    }
    double Sarea()
    {
        s = 3.14*r*r;
    }
    double Volume()
    {
        v= (3.0/4)*3.14*r*r*r;
    }
private:
    double r;
    double v;
    double s;

};
void test01()
{
    Cshape* g1 = new Globe;
    g1->DispAttr(3.0);

}
int main()
{
    test01();
    return 0;
}
