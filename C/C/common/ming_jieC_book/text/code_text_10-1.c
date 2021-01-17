/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-02-18 20:46:11
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-02-18 21:04:06
 */
#include<stdio.h>
void yesterday(int *y,int *m,int *d)
{
    *d=*d-1;
    printf("%d year %d month %d day\n",*y,*m,*d);

}
void tomorrow(int *y,int *m,int *d)
{
    *d=*d-1;
    printf("%d year %d month %d day\n",*y,*m,*d);

}
void judge(int y)
{
	if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)    
    {
        printf("y\n");
    }
    else
    {
        printf("n\n");
    }
}
int main()
{
    int y;
    int m;
    int d;
    puts("Input year,month,day");
    printf("year:");scanf("%d",&y);
    printf("month:");scanf("%d",&m);
    printf("day:");scanf("%d",&d);
    yesterday(&y,&m,&d);
    tomorrow(&y,&m,&d);
    printf("judge");
    judge(y);
    return(0);


}
