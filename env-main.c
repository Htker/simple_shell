#include <stdio.h>

/**
 * main - prints the environment
 * Description: 'the program's description'
 * @ac: the number of command-line arguments
 * @av: an array of strings containing the command-line arguments
 * @env: an array of strings containing the environment variables
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
	unsigned int i;

	i = 0;
	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
	return (0);
}

