#include <stdio.h>
#include <unistd.h>

/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
int main(void)
{
	fork();
	printf("%u This is my pid\n", getpid());


	return (0);
}
