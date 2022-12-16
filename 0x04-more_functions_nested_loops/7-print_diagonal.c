#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: input number
 * Return: diagonal
 */
void print_diagonal(int n)
{

int i, j;

if (n <= 0)
{
_putchar('\n');
}

else
{

for (i = 1; i <= n; i++)
{

for (j = 1; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
}
}
}

