#include "main.h"

/**
 *_islower - a function that checks for lowercase character
 *@c: The integer to print
 *
 *Description: function that checks for lowercase character.
 *Return: 0(Success)
 */

int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
