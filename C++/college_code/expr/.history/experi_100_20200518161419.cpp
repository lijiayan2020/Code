/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-04-15 22:58:43
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-05-17 22:20:13
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
// #include<iostream>
// #include "Matrix.h"
// using namespace std;

// class Matrix
// {
// public:
// 	Matrix(double*num);
	
// 	Matrix operator+ (const Matrix &ze);
// 	void display();
// private:
	
// 	double *num;
// };
// Matrix::Matrix(const Matrix &num)
// {
// 	num = new double[2*3];
// 	cout << "Please enter a matrix"
//     for (int i = 0; i < 2*3; i++)
//     {
//         cin >> num[i] =m.num[i];
//     }
// }

// Matrix Matrix::operator+(const Matrix &ze)
// {
// 	Matrix last = *this;
// 		for (int i = 0; i < 2; i++)
// 		{
// 			for (int j = 0; j < 3; j++)
// 			{
				
// 			}
// 		}
// 		return _copy;
// }
// void Matrix::display()
// {
// 	for(i=0;i<row;i++)
// 	{
// 		for(j=0;j<list;j++)
// 		{
// 			cout << arr[i][j];
// 		}
// 		cout << " " << endl;
// 	}
// }


// int  main()
// {
// 	Matrix m1(2,3),m2(2,3),m3;
// 	m3=m1+m2;
// 	cout << "m1=" ;m1.display();
// 	cout << "m2=" ;m2.display();
// 	return 0;
// }







// 运算符重载,进行矩阵运算,全部使用数组
#include<iostream>
using namespace std;

class juZhenJiaFa
{public:
float *m;
    juZhenJiaFa(float *p){m=p;}

    void show()
    {cout<<"----------------------------------"<<endl;
        for (int i = 0; i < 6; i+=3)
            printf("|%-10.2f %-10.2f %10.2f|\n",m[i],*(m+i+1),*(m+i+2));
    cout<<"----------------------------------"<<endl;
    }

    juZhenJiaFa operator+(juZhenJiaFa &matrix2);
};

juZhenJiaFa juZhenJiaFa::operator+(juZhenJiaFa &matrix2)
    {
        float a3[6]={0,0,0,0,0,0};
        juZhenJiaFa matrix(a3);

   for (int i = 0; i < 6; i++)
    {
        matrix.m[i]=m[i]+ matrix2.m[i];
        cout<<matrix.m[i]<<" "<<endl;
    }
    return matrix;
    }

int main()
{
    float a1[6]={12,23,34,45,56,67},a2[6]={2,3,4,5,6,7},a3[6]={0,0,0,0,0,0};

	juZhenJiaFa ma1(a1),ma2(a2),ma3(a3);

    ma1.show();cout<<"+"<<endl;ma2.show();
    ma3=ma1+ma2;

    //for(int i=0;i<6;i++)
//    cout<<ma3.m[0]<<ma3.m[1]<<ma3.m[2]<<ma3.m[3]<<ma3.m[4]<<ma3.m[5]<<endl;
    cout<<ma3.m[3];
    ma3.show();
}





