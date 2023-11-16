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

	printf("argv content is argv[]\n");

	while (*av != NULL)
	{
		printf("argv = %s\n", *av);
		av++;
	}

	return (0);
}
