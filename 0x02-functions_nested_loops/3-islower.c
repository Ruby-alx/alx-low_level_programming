#include "holberton.h"
/**
 * _islower - entry point
 * @c : Character to be check
 * Return: Always 0 (Success)
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
