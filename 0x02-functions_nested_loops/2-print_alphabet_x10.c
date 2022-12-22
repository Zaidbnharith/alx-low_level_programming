#include "main.h"

/**
* main - entry point
*
* Description: "prints alphabets 10 times."
*
* Return: alway returns 0 (success)
*/

print_alphabet_x10(void)
	/*print_alphabet_x10 prints the alphabets 10 times. */
{
int count = 0;
char letter;
while (count++ <= 9)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);

_putchar('\n');
}
}
