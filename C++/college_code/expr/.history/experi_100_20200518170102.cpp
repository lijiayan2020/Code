/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-04-15 22:58:43
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-05-18 17:01:02
 */ 
//十、运算符重载实验（2学时）
//1. 定义一个复数类Complex，重载运算符“+”，使之能用于复数的加法运算。将运算符函数重载为非成员、非友元的普通函数。编程序，求两个复数之和。


// #include<iostream>
// using namespace std;

// class Complex
// {
// public:
// 	Complex(){real=0;imag=0;};
// 	Complex(double r,double i){real=r;imag=i;}
// 	Complex operator + (Complex &c1);
// 	void display();
// private:
// 	double real;
// 	double imag;
// };
// Complex Complex::operator+(Complex &c2)
// {
// 	Complex c;
// 	c.real=real+c2.real;
// 	c.imag=imag+c2.imag;
// 	return c;
// }

// void Complex::display()
// {cout << "("<< real <<","<<imag << "i)"<<endl;}


// int main()
// {
// 	Complex c1(3,4),c2(5,-10),c3;
// 	c3=c1+c2;
// 	cout << "c1=";c1.display();
// 	cout << "c2=";c2.display();
// 	cout << "c3=";c3.display();
// 	return 0;
// }




//2. 有两个矩阵a和b，均为2行3列。求两个矩阵之和。重载运算符“+”，使之能用于矩阵相加。如c = a + b。
#include<iostream>
using namespace std;
class Matrix
{
    double *m;
    Matrix(double *n){n=m;}
    
    void display()
    {
        cout.precision(2);//设置保留两位有效数字
        // cout << setiosflags(ios::left|ios::showpoint);//设置左对齐，以一般实数方式显示
        cout.width(10);//设置显示宽域
        
        cout << m[0] << m[1] << m[2] << endl;
        cout << m[3] << m[4] << m[5] << endl;
        
    }
};

void test01()
{
    double a[]={1,2,3,4,5,6};
    Matrix m1(a);
    m1.display();

}
int main()
{
    test01();
    return 0;
}


