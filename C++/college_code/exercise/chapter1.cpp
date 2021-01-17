/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-05-18 19:40:06
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-05-20 09:44:59
 */ 
#include <iostream>
#include<string>
using namespace std;

//6. 
// int main ( )

// {
//     void sort (int x, int y, int z) ; 
//     int x, y, z; 
//     cin >> x>>y>> z; 
//     sort (x, y, z) ; 
//     return 0 ;
// }
// void sort (int x, int y, int z)
// {
//     int temp; 
//     if (x > y) {temp=x;x=y;y=temp}
    
//     if (z < x) cout << z << ', ' << x << ', ' << y << endl; 
//             else if (z < y) cout << x << ',' << z <<  ', ' << y << endl; 
//         else cout << x << ', ' << y << ', '  << z << endl;
// }
//7.求三个数或者两个数中的最大值 
// int max(int x,int y,int z=0)
// {
    
//     if(x<y)   x=y;
//     if(x<z) return z;
//         else if(x>z) return x;
    
// }
// int main()
// {

//     int x,y,z;
//     // cout << "num1:" ;cin>>x;
//     // cout << "num2:" ;cin>>y;
//     // cout << "Have three numbers?" << endl;
//     // cout << "NO enter '0'"<< endl;
    

//     // cout << "num3:" ;cin>>z;
//     x=max(12,88,10);
//     cout << "max=" << x << endl;
//     y=max(12,0);
//     cout << "max=" << y << endl;
//     return 0;
// }


//8.
//void  Swap(int *a,int *b)
//{
//	int temp;
//	temp=*a;
//	*a=*b;
//	*b=temp;
//}
//int main()
//{
//	int a,b;
//    cout << "Please enter two integers."<< endl;
//    cout << "A:"; cin >> a;
//	cout << "B:"; cin >> b; 
//	if(a>b) Swap(&a,&b);
//	cout << a << "  " << b << endl;
//	return 0;
//}


//10.
//int main()
//{
//	string a;
//	string b;
//	a="Li";
//	b="Jiayan";
//	cout << a << endl;
//	a=a+b;
//	cout << a << endl;
//	return 0;
//}

//12

int main()
{
	string n1,n2,n3,n4,n5;
	n1="Li";
	n2="Jia";
	n3="yan";
	n4="hate";
	n5="everything";
	string temp;
	if(n1>n2) 
	{
		temp=n1;
		n1=n2;
		n2=temp;
	}
		if(n2>n3) 
	{
		temp=n2;
		n2=n3;
		n3=temp;
	}
		if(n3>n4) 
	{
		temp=n3;
		n3=n4;
		n4=temp;
	}
		if(n4>n5) 
	{
		temp=n4;
		n4=n5;
		n5=temp;
	}
	cout << n1 << " " << n2 << " " << n3 << " " << n4 << " " << n5 << " " << endl;
	return 0;
	
}


