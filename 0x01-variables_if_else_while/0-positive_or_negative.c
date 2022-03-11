#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and print the number
<<<<<<< HEAD
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;

		if (n > 0)
			printf("%i is positive\n", n);
		else if (n < 0)
			printf("%i is negative\n", n);
		else
		printf("%i is zero\n", n);

		return (0);
=======
 * and if it is positive, negative or zero
 * Return: 0
 */
int main(void)
{ 
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);

	return (0);
>>>>>>> 72e0cc847e22bc7942e7ee191d10b08c1935f27e
}
