#include <stdio.h>
/**
 * main - program that prints all the numbers of base 16 in lowercase.
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
int num;
int lc;

for (num = 0; num < 10; num++)
putchar((num % 10) + '0');

for (lc = 'a'; lc <= 'f'; lc++)
putchar(lc);

putchar('\n');

return (0);
}
