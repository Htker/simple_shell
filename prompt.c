#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
int main(void)
{
	size_t n = 0;
	char *buf = NULL;

	printf("root@e189c5fffaef:/simple_shell# ");
	getline(&buf, &n, stdin);
	printf("%s", buf);

	free(buf);

	return (0);
}
