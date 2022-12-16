#include "main.h"
/**
 * more_numbers - nmbr fct
 *
 * Return: no return
 */
{
int i, j;
for (i = 1; i <= 10; i++)
{
for (j = 0; j < 15; j++)
{
if (j >= 10)
_putchar('1');
_putchar(j % 10 + '0');
}
_putchar('\n');
}
}
