#include "main.h"
/**
 *print_times_table - Prints the n times table, starting with 0
 *@n: The number
 */
void print_times_table(int n)
{
        int i;
        int j;
        int k;
        int w;
        int q;
        int r;

        for (i = 0; i <= n; i++)
        {
        for (j = 0; j <= n; j++)
        {
        k = i * j;

                if (k > n)
                {
                w = k % 10;
                q = k - w;
                r = q / 10;
                _putchar(44);
                _putchar(32);
                _putchar('0' + r);
                _putchar('0' + w);
                }
                else
                {
                if (j != 0)
                {
                _putchar(44);
                _putchar(32);
                _putchar(32);
                }
                _putchar('0' + k);
                }
                }
                _putchar('\n');
                }
}
}
