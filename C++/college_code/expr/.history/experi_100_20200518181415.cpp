/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-04-15 22:58:43
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-05-18 18:14:15
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
#include<iomanip>
using namespace std;

//定义矩阵类
class Matrix
{public:
    double *m;
    Matrix(double *n){m=n;}
    //输出矩阵
    void display()
    {
        
        for(int i=0;i<6;i+=3)
        {
            cout << "|"<<left << setw(10) << m[i] << "  " ;
            cout << left << setw(10) << *(m+i+1)<< "  " ;
            cout << left  <<  *(m+i+2) << "|" << endl;
            
        }
        
        Matrix operator+(Matrix &m2);
    }
};

// 运算符重载
Matrix Matrix::operator+(Matrix &m2)
{
    double c[6]={0,0,0,0,0,0};
    Matrix m3(c);
    for(int i=0;i<6;i++)
    {
        m3.m[i]=m[i]+m2.m[i];
    }
    return m3;
}



void test01()
{
    double a[6]={0,1,2,3,4,5},b[6]={1,2,3,4,5,6},c[6]={0,0,0,0,0,0};
    Matrix m1(a),m2(b),m3(c);
    m3=m1+m2;
    cout << "----------------" << endl;
    m1.display();
    cout << "+" << endl;
    cout << "----------------" << endl;
    m2.display();
    cout << "=" << endl;
    cout << "----------------" << endl;
    m3.display();
    

}
int main()
{
    test01();
    return 0;
}


