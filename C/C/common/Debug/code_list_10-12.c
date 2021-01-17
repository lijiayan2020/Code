/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-02-18 21:41:52
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-02-20 15:38:17
 */
#include<stdio.h>
int main(void)
{
    int vc[3];
    int *ptr=vc;
    printf("ptr == vc:%d\n",ptr==vc);
    printf("&vc[1] <= &vc[1]:%d\n",&vc[1]==&vc[1]);
    printf("&vc[1] < &vc[2]:%d\n",&vc[1] < &vc[2]);
    printf("&vc[2] - &vc[0]:%d\n",&vc[2] - &vc[0]);
    
    return(0);
}