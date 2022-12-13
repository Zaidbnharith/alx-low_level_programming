#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - program to print lowcase alphabets
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}

putchar('\n');
return (0);
}
