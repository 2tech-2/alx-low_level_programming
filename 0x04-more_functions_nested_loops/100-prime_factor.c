#include <stdio.h>
#include <stdlib.h>
/**
 * main - print largest prime factor of a fixed numbers
 *
 * Return: Always 0.
 */
int main(void)
{

	long i, num;

	num = 612852475143;

	for (i = 3; i < num; i += 2)
	{
		if (num % i == 0)
		{
			num /= i;
		}
	}
	printf("%ld\n", num);

	return (0);
}
