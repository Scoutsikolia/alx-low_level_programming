/*
 *file 0-positive_or_negative.c
 *
 */

#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 *main - prints a random number and sates whether
 *
 *it is positive, negative, or zero
 *
 *Return: Always 0.
 */

int main(void)

{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	printf("Last digit of %i is", n);

	int d = n % 10;

	if (d > 5)

    {
        printf("%d and is greater than 5\n", d);

    }

	else if ( d == 0)
    {
        printf("%d and is 0\n", d);

    }

	else if (0 != d < 6)
    {

        printf("%d and is less than 6 and not 0\n", d);

    }
	return (0);
}
