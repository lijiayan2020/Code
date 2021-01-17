/*
 * @Description: 
 * @version: 
 * @Author: LiJiayan
 * @Date: 2020-02-15 12:15:15
 * @LastEditors: LiJiayan
 * @LastEditTime: 2020-02-18 20:34:12
 */
#include <stdio.h>
size_t str_length(const char *s)
{
    size_t len=0;
    while (*s++)
        len++;
    return(len);
}
int main()
{
    char str[100];
    printf("请输入一段文字：");
    scanf("%s",str);
    printf("文字的长度是%u",(unsigned)str_length(str));
    return(0);

}
