#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, a, b;
    scanf("%d %d", &a, &b);
    for (i = a; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            printf("%d和%d的最大公约数为：%d\n", a, b, i);
            break;
        }
    }
    return 0;
}
