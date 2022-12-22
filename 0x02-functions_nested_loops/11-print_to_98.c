#include "main.h"

/**
 * print_to_98 - prints all natural number from n to 98
 * @n: the number to begin counting
 */
void print_to_98(int n)
{
if (n > 98)
{
while (n > 98)
_putchar("%d, ", n--);
_putchar("%d\n", n);
}
else
{
while (n < 98)
_putchar("%d\n", n++);
_putchar("%d\n", n);
}
}
