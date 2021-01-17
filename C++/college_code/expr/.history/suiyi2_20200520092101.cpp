/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-05-18 19:40:06
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-05-20 09:21:01
 */ 
#include <iostream>
using namespace std; 
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

// int max(int x,int y,int z=0)
// {
//     if(z==0){if(x<y) return y;}
//     if(z=!0&&x<y)    
//     {
//         x=y;
//         if(x<z)
//             return x;
//     }
// }
// int main()
// {

//     int x,y,z;
//     // cout << "num1:" ;cin>>x;
//     // cout << "num2:" ;cin>>y;
//     // cout << "Have three numbers?" << endl;
//     // cout << "NO enter '0'"<< endl;
    

//     // cout << "num3:" ;cin>>z;
//     x=max(1,2,10);
//     cout << "max=" << x << endl;
//     return 0;
// }


int add(int x, int y=5, int z=6)
{
	return x+y+z;
} 

int main()
{
	cout << add(10, 20, 30) << endl;
	cout << add(10, 20) << endl;
	cout << add(10) << endl;
	
	return 0;
}


