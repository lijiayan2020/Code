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
    }   
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
    
};





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
    cout << m3.m[3];
    m3.display();
    

}
int main()
{
    test01();
    return 0;
}

