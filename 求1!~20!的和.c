/*
求n！（即求11+2！+3！+4！+……+20！）
*/
#include <stdio.h>
int main()
{
    int i, j, jec, sum = 0;
    for (i = 1; i <= 20; i++)
    {
        jec = 1;
        for (j = 1; j <= i; j++)
        {
            jec *= j;
        }
        sum += jec;
    }
    printf("%d\n", sum);
    return 0;
}