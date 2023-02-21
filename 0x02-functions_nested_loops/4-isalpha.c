#include "main.h"

/**
 *_isalpha -checks for alphabetic character.
 *@c: stores an integer
 *Description:  function that checks for alphabetic character.
 *Return: (1)-for alphabet (0)-for an integer
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
