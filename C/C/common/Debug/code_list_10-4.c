/*
 * @Description: 指针
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-02-18 17:55:15
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-02-18 18:16:49
 */
#include <stdio.h>
void hiroko(int *height)
{
    if(*height<180)
        *height=180;
}
int main(void)
{
    int sato=178;
    int sanaka=175;
    int hiraki=165;
    int masaki=179;
    hiroko(&masaki);
    printf("佐藤喜欢的身高是%d\n",sato);
    printf("佐中喜欢的身高是%d\n",sanaka);
    printf("平木喜欢的身高是%d\n",hiraki);
    printf("真崎喜欢的身高是%d\n",masaki);
    return(0);

}