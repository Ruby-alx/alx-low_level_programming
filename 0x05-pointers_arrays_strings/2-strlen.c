#include "holberton.h"

/**
  * _strlen - returns lenght of string
  * @s: String to count
  * Return: length of a string
*/

int _strlen(char *s)
{
int i = 0;

while (s[i])
i++;

return (i);
}
