/*
有3个整数a，b,c，由键盘输人，输出其中最大的数。
*/
#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("请输入3个整数：");
    scanf("%d%d%d", &a, &b, &c);
    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    printf("最大的是：%d\n", max);
    return 0;
}