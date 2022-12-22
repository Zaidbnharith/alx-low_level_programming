#include <stdio.h>

/**
 * main - lists all the natural number below 1024.
 *
 * Return: always return 0
 */

int main(void)
{
int i, sum = 0;

for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum += 1;
}
printf("%d\n", sum);

return (0);
}
}
