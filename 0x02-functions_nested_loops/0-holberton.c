#include "holberton.h"
/**
 * main - print the word "Holberton"
 * Return: Always 0 (Success)
 */
int main(void)
{
  char *ch = "Holberton\n";

  while (*ch)
    {
      _putchar(*ch++);
    }

  return (0);
}

