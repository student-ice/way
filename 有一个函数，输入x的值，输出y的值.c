/*
有一个函数：
    x (x<1)
y=  2x-1 (1<=x<10)
`   3x-11 (x>=10)
写程序，输人x的值，输出y相应的值。
*/
#include <stdio.h>
int main()
{
    int x, y;
    printf("输入x的值：");
    scanf("%d", &x);
    if (x < 1)
    {
        printf("y=%d\n", x);
    }
    else if (x >= 1 && x < 10)
    {
        printf("y=%d\n", 2 * x - 1);
    }
    else
    {
        printf("y=%d\n", 3 * x - 11);
    }
    return 0;
}