/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-05-18 16:13:54
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-05-19 14:15:10
 */ 


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
        // cout<<matrix.m[i]<<" "<<endl;
    }
    cout<<"="<<endl;
    matrix.show();
    return matrix;
    }

int main()
{
    float a1[6]={12,23,34,45,56,67},a2[6]={2,3,4,5,6,7},a3[6]={0,0,0,0,0,0};

	juZhenJiaFa ma1(a1),ma2(a2),ma3(a3);

    ma1.show();cout<<"+"<<endl;ma2.show();
    ma3=ma1+ma2;

    // ma3.show();
}
