#include <stdio.h>
int main()
{
    char a[20], b[10];
    int i, pos, j;
    gets(a);
    gets(b);
    for (i = 0; i < 20; i++)
    {
        if (a[i] == '\0')
        {
            pos = i;
            break;
        }
    }
    for (i = pos, j = 0; i < 20; i++, j++)
    {
        a[i] = b[j];
    }
    a[i] = '\0';
    puts(a);
    return 0;
}