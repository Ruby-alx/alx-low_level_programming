#include "holberton.h"

#include "stdio.h"

/**
 * print_array - Print array upto n elements
 * @a: Array to be read from
 * @n: Number of elements to be read
 * Return: Always 0.
*/
void print_array(int *a, int n)
{
int j;

for (j = 0; j < n; j++)
{
printf("%d", a[j]);
if (j != (n - 1))
{
printf(", ");
}
}

printf("\n");
}
