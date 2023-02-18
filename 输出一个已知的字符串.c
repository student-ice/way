#include <stdio.h>
int main()
{
    int i;
    char a[15] = {'I', ' ', 'a', 'm', ' ', 'a', ' ', 's', 't', 'u', 'd', 'e', 'n', 't'};
    for (i = 0; i < 15; i++)
    {
        printf("%c", *(a + i));
    }
    putchar('\n');
    return 0;
}