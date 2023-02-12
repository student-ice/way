/*
从键盘输人一个小于1000的正数，要求输出它的平方根（如平方根不是整数，则输
出其整数部分）。要求在输人数据后先对其进行检查是否为小于1000的正数。
若不是，则要求重新输入
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    printf("请输入一个小于1000的正数：");
    while (1)
    {
        scanf("%d", &a);
        if (a < 1000)
            break;
        printf("输入有误，请重新输入：");
    }
    b = sqrt(a);
    printf("%d的平方根为：%d\n", a, b);
    return 0;
}