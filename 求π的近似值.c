/*
用公式π/4≈1-1/3+1/5-1/6+...求π的近似值，直到发现某一项的绝对值小于10e-6为止（该项不累加）。
*/
#include <stdio.h>
#include <math.h>
int main()
{
    double t = 1, i = 1, sum = 1, flag = -1;
    while (fabs(t) >= 1e-6)
    {
        i += 2;
        t = 1 / i;
        sum += t * flag;
        flag *= -1;
    }
    printf("%f", sum * 4);
    return 0;
}