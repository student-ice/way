/*
输入4个整数，要求按由小到大的顺序输出。
*/
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("请输入四个整数：");
    scanf("%d %d %d %d", &a, &b, &c, &d);
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
    if (c > d)
    {
        c = c + d;
        d = c - d;
        c = c - d;
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
    }
    printf("由小到大为：%d %d %d %d\n", a, b, c, d);
    return 0;
}