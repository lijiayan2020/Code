/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-05-18 19:40:06
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-05-20 08:48:54
 */ 
#include < iostream >
using namespace std; 
int main ( )

{
    void sort (int x, int y, int z) ; 
    int x, y, z; 
    cin >> x>>y>> z; 
    sort (x, y, z) ; 
    return 0 ;
}
void sort (int x, int y, int z)
{
    int temp; 
    if (x > y) {temp=x;x=y;y=temp}
    
    if (z < x) cout << z << ', ' << x << ', ' << y << endl; 
            else if (z < y) cout << x << ',' << z <<  ', ' << y << endl; 
        else cout << x << ', ' << y << ', '  << z << endl;
}



