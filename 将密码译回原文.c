#include <stdio.h>
#define NUM 100
int main()
{
    char a[NUM], b[NUM];
    int i;
    gets(a);
    puts(a);
    for (i = 0; i < NUM; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            b[i] = 'A' + (25 - (a[i] - 'A'));
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            b[i] = 'a' + (25 - (a[i] - 'A'));
        }
        else
        {
            b[i] = a[i];
        }
    }
    puts(b);
    return 0;
}