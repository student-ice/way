#include <stdio.h>
int main()
{
    double sum = 0, i;
    for (i = 1; i <= 100; i++)
    {
        if (i <= 10)
            sum += 1 / i;
        if (i <= 50)
            sum += i * i;
        sum += i;
    }
    printf("%f\n", sum);
    return 0;
}