#include "main.h"

/**
 * _abs -computes the absolute value of an integer.;
 *@c: integer to compute it's absolute value
 *Description:function that computes the absolute value of an integer.
 *Return: alsolute value of integer
 */

int _abs(int c)
{
if (c > 0 || c == 0)
return (c);

else
return (c * -1);

}
