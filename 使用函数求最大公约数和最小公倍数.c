#include <stdio.h>
void max(int a, int b)
{
    int i;
    for (i = a > b ? a : b; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            printf("%d和%d最大公约数是：%d\n", a, b, i);
            break;
        }
    }
    printf("最小公倍数是：%d\n", a * b / i);
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    max(a, b);
    return 0;
}