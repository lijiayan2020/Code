/*
 * @Description: error 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-02-14 12:48:26
 * @LastEditors: LiJiayan
 * @LastEditTime : 2020-02-14 13:01:58
 */
#include <stdio.h>
int main(void)
{
    char str[] = "ABC";
    char *ptr = "123";
    str = "DEF";
    ptr = "456";
    printf("str = \"%s\"\n",str);
    printf = ("ptr = \"%s\"\n",ptr);
    return(0);
}