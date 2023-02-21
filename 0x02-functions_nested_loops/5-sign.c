#include "main.h"

/**
 *print_sign - prints the sign of a number.
 *@n: integer to be checked
 *
 *Description:function that prints the sign of a number.
 *Return: 1(if positive) 0(when is 0) and -1(when negative)
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0' + 0);
return (0);
}
else if (n < 0)
{
_putchar('-');
}
return (-1);
}

