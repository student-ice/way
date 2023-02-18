/*
有3个字符串，要求找出其中“最大”者。
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[10], b[10], c[10], max[10];
    gets(a);
    gets(b);
    gets(c);
    if (strcmp(a, b) > 0)
    {
        strcpy(max, a);
    }
    else
    {
        strcpy(max, b);
    }
    if (strcmp(c, max) > 0)
    {
        strcpy(max, c);
    }
    printf("最大者是：");
    puts(max);
    return 0;
}