#include <stdio.h>
int main()
{
    char a[10], b[10], i;
    gets(a);
    gets(b);
    for (i = 0; i < 10; i++)
    {
        if (a[i] > b[i])
        {
            printf("%d\n", a[i] - b[i]);
            break;
        }
        if (a[i] < b[i])
        {
            printf("%d\n", a[i] - b[i]);
            break;
        }
    }
    if (i == 10)
        printf("0\n");
    return 0;
}