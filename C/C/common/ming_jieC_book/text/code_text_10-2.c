/*
 * @Description: 给三个数排序
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-02-18 21:09:26
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-02-18 21:17:34
 */
#include<stdio.h>
void swap(int *nx,int *ny)
{
    int temp=*nx;
    *nx=*ny;
    *ny=temp;
}

void sort3(int *n1,int *n2,int *n3)
{
    if(*n1>*n2)
        swap(n1,n2);
    if(*n2>*n3)
        swap(n2,n3);
}
int main(void)
{
    int na,nb,nc;
    puts("Input three integers");
    printf("A:");scanf("%d",&na);
    printf("B:");scanf("%d",&nb);
    printf("C:");scanf("%d",&nc);
    sort3(&na,&nb,&nc);
    printf("%d,%d,%d",na,nb,nc);
    return(0);
}