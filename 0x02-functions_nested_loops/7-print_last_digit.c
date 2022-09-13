#include "main.h"

/**
 *print_last_digit - prints last digit
 *@n: arguement to be checked
 *Return: last digit
 */

int print_last_digit(int n)
{
int b;
if (n < 0)
n = -n;
b = n % 10;
if (n < 0)
b = -b;
_putchar(b + '0');
_putchar('\n');
return (b);
}
