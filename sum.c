#include <stdio.h>
#include <unistd.h>

/**
 * main - prints the environment
 * @ac: the number of command-line arguments
 * @av: an array of strings containing the command-line arguments
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int i;
	int sum = 0;

	printf("argc or ac = %d\n", ac);
	printf("argv content is argv []\n");

	for (i = 1; i < ac; i++)
	{
		printf("argv[%d] = %s\n", i, av[i]);
		sum += atoi(av[i]);
	}
	printf("sum is %d\n", sum);
	return (0);
}
