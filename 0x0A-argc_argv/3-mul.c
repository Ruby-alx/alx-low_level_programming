#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two arguments
 * @argc: The argument count
 * @argv: The argument vector
 * Return: Always zero
*/
int main(int argc, char *argv[]
{
int main(int argc, char *argv[])
{
int res;
int a;
int b;
if (argc < 2)
{
printf("Error\n");
return (1);
}
else
{
a = atoi(argv[1]);
b = atoi(argv[2]);
res = a * b;
printf("%d\n", res);
}
return (0);
}
