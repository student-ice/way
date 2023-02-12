/*
输人3个数a,b,c，要求按由小到大的顺序输出。
*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("请输入三个整数：");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    if (b > c)
    {
        b = b + c;
        c = b - c;
        b = b - c;
        if (a > b)
        {
            a = a + b;
            b = a - b;
            a = a - b;
        }
    }
    printf("%d %d %d\n", a, b, c);
    return 0;
}