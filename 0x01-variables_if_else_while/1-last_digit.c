#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Description:main - set a random number to variable.
 * If the number is > 5:is greater than five.
 * If the last digit is 0:is zero.
 * If the last digit is less than 6 and not 0:is less than six and not zero.
 * Return:Always return 0 (Success)
 */

int main(void)
{
int n;
int a;
srand(time(0));
n = rand() - RAND_MAX / 2;
a = n % 10;
if (a > 5)

{
printf("Last digit of %d is %d and is greater than 5\n", n, a);
}

else if (a == 0)

{
printf("Last digit of %d is %d and is 0\n", n, a);
}

else

{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
}
return (0);
}
