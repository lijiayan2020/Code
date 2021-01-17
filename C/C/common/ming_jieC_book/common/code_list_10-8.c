/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-02-18 20:27:35
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-02-18 20:38:41
 */
#include <stdio.h>
void swap(int *nx,int *ny)
{
    int temp=*nx;
    *nx=*ny;
    *ny=temp;
}
void sort2(int *n1,int *n2)
{
    if(*n1>*n2)
        swap(n1,n2);
}
int main()
{
    int na,nb;
    puts("Input two integers:");
    printf("A:");scanf("%d",&na);
    printf("B:");scanf("%d",&nb);
    sort2(&na,&nb);
    printf("%d,%d",na,nb);
    return(0);

}