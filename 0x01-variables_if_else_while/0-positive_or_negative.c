#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Description: main - set a random numer to the variable.
 * If the number is > 0:is positive,if the number is 0:is zero.
 * If the number is < 0;is negative.
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
