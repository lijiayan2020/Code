/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-02-18 19:25:55
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-02-18 19:34:45
 */
#include <stdio.h>
void swap(int &nx,int &ny)
{
    int temp=nx;
    nx=ny;
    ny=temp;
}
int main(void)
{
    int na,nb;
    puts("请输入两个整数\n");
    printf("整数A:");scanf("%d",&na);
    printf("整数B:");scanf("%d",&nb);
    //交换值
    swap(na,nb);
    printf("整数A:%d\n",na);
    printf("整数B:%d",nb);
    return(0);
}