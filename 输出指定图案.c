/*
输出以下图案：
   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i < 7; i++)
    {
        if (i <= 3)
        {
            for (j = 0; j < 3 - i; j++)
            {
                putchar(' ');
            }
            for (j = 0; j < 2 * i + 1; j++)
            {
                putchar('*');
            }
        }
        else
        {
            for (j = 0; j < i - 3; j++)
            {
                putchar(' ');
            }
            for (j = 0; j < (7 - i) * 2 - 1; j++)
            {
                putchar('*');
            }
        }

        putchar('\n');
    }
    return 0;
}