/*
输人两个实数，按由小到大的顺序输出这两个数。
*/
#include <stdio.h>
int main()
{
    double a, b;
    printf("请输入两个实数：");
    scanf("%lf %lf", &a, &b);
    if (a < b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    printf("%f %f\n", a, b);
    return 0;
}