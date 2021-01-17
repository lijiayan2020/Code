/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-02-20 15:43:01
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-02-20 15:48:04
 */
#include<stdio.h>
void int_set(int vc[],int no,int val)
{
    int i;
    for(i=0;i<no;i++)
        vc[i]=val;
}
int  main()
{
    int ary[]={1,2,3,4,5};
    int i;
    int_set(ary,5,0);
    for(i=0;i<5;i++)
        printf("ary[%d]=%d\n",i,ary[i]);
    return 0;
}