/*
 * @Description: 地址
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-02-18 15:54:12
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-02-18 15:57:50
 */
#include<stdio.h>
int main(void)
{
    int nx;
    double dx;
    int vc[3];
    printf("nx的地址是%p\n",&nx);
    printf("dx的地址是%p\n",&dx);
    printf("vc[0]的地址是%p\n",&vc[0]);
    printf("vc[1]的地址是%p\n",&vc[1]);
    printf("vc[2]的地址是%p\n",&vc[2]);
    return(0);
}