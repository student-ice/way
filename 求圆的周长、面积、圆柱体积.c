/*
设圆半径*=1.5，圆柱高=3，求圆周长、圆面积、圆柱体积。
用scanf输人数据，输出计算结果，输出时要求有文字说明，取小数点后2位数字。请编程序。
*/
#include <stdio.h>
#define PI 3.1415926
int main()
{
    double r, h;
    printf("请输入圆的半径：");
    scanf("%lf", &r);
    printf("请输入圆柱的高：");
    scanf("%lf", &h);
    printf("圆周长为：%.2f\n", 2 * PI * r);
    printf("圆面积为：%.2f\n", PI * r * r);
    printf("圆柱体积为：%.2f\n", PI * r * r * h);
    return 0;
}