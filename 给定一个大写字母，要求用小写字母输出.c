/*
给定一个大写字母，要求用小写字母输出。
*/
#include <stdio.h>
int main()
{
    char a;
    printf("请输入一个大写字母：");
    scanf("%c", &a);
    printf("对应的小写字母是：%c\n", a + 32);
    return 0;
}