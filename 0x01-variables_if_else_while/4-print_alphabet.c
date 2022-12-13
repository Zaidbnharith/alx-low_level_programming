#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in lowercase.
 *
 * Return:Always return 0 (Success)
 */

int main(void)
{
char lc;

for (lc = 'a'; lc <= 'z'; lc++)
{
if (lc != 'e' && lc != 'q')
putchar(lc);
}

putchar('n\');

return (0);
}
