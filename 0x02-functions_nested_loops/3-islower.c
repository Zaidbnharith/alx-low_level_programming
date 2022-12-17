#include <stdio.h>
#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: the characterto be checked
 *
 * Return: 1 if the character is lower, 0n otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
