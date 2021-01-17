/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-04-15 22:58:43
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-05-17 20:31:26
 */ 
//十、运算符重载实验（2学时）
//1. 定义一个复数类Complex，重载运算符“+”，使之能用于复数的加法运算。将运算符函数重载为非成员、非友元的普通函数。编程序，求两个复数之和。


#include<iostream>
using namespace std;

class Complex
{
public:
	Complex(){real=0;imag=0;};
	Complex(double r,double i){real=r;imag=i;}
	Complex operator + (Complex &c1);
	void display();
private:
	double real;
	double imag;
};
Complex Complex::operator+(Complex &c2)
{
	Complex c;
	c.real=real+c2.real;
	c.imag=imag+c2.imag;
	return c;
}

void Complex::display()
{cout << "("<< real <<","<<imag << "i)"<<endl;}


int main()
{
	Complex c1(3,4),c2(5,-10),c3;
	c3=c1+c2;
	cout << "c1=";c1.display();
	cout << "c2=";c2.display();
	cout << "c3=";c3.display();
	return 0;
}
//2. 有两个矩阵a和b，均为2行3列。求两个矩阵之和。重载运算符“+”，使之能用于矩阵相加。如c = a + b。
#include<iostream>
using namespace std;

class Matrix
{
public:
	Matrix(){row=0;list=0;arr[2][3];}
	Matrix(int r,int l,arr[2][3]){row=r;list=l;}
	Matrix operator+ (Matrix &ze);
	void display();
private:
	int row;
	int list;
	char arr[2][3];
};
Matrix::Matrix()
{
	int i,j;
	row=2;
	list=3;
	cout << "Please enter a matrix(2*3)"
	for(i=0;i<row;i++)
	{
		for(j=0;j<list;j++)
		{
			cin >> arr[i][j];
		}
		cout << " " << endl;
	}
}

Matrix Matrix::operator+(Matrix &ze)
{
	Matrix m[2][3];
	for(i=0;i<row;i++)
	{
		for(j=0;j<list;j++)
		{
			m[2][3] = ze[i][j] + arr[i][j];
		}
	}
	return m;
}
void Matrix::display()
{
	for(i=0;i<row;i++)
	{
		for(j=0;j<list;j++)
		{
			cout << arr[i][j];
		}
		cout << " " << endl;
	}
}


int  main()
{
	Matrix m1(2,3),m2(2,3);
	m3=m1+m2;
	cout << "m1=" ;m1.display();
	cout << "m2=" ;m2.display();
	return 0;
}













