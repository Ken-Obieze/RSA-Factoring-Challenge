#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int printPrimeFactors(long int n);

/**
 * factorFromFile - imports and finds factors
 * from file
 * @s: number to perform calculation on
 * Return: 0 if successful
 */

int factorFromFile(char *s)
{
	FILE *facptr;
	long int tmp;

	facptr = fopen(s, "r");

	if (facptr == NULL)
	{
		printf("Error!");
		exit(1);
	}

	while (fscanf(facptr, "%ld", &tmp) != EOF)
	{
		printPrimeFactors(tmp);
	}
	fclose(facptr);
	return (0);
}

/**
 * printPrimeFactors - function to print prime
 * factors
 * @n: number to perform calculation on
 * Return: 0 if successful
 */

int printPrimeFactors(long int n)
{
	long int c, i;

	for (long int i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			c = n / i;
			printf("%ld=%ld*%ld\n", n, c, i);
			return (0);
		}
	}
}

/**
 * main- entry point of program
 * @argc: argument count
 * @argv: argument array
 * Return: 0 if successful
 */

int main(char argc, char *argv[])
{
	char *s = argv[1];

	if (argc == 0)
	{
		printf("Error!");
		exit(1);
	}
	factorFromFile(s);
	return (0);
}
