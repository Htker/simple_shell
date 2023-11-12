#include "shell.h"

/**
 * _strcpy - Copy a string.
 * @dest: The destination.
 * @src: The source.
 *
 * Return: Pointer to destination.
 */
char *_strcpy(char *dest, char *src)
{
	int X = 0;

	if (dest == src || src == NULL)
		return (dest);

	while (src[X] != '\0')
	{
		dest[X] = src[X];
		X++;
	}
	dest[X] = '\0';
	return (dest);
}

/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string.
 */
char *_strdup(const char *str)
{
	int len = 0;
	char *ret;

	if (str == NULL)
		return (NULL);

	while (*str++ != '\0')
		len++;

	ret = malloc(sizeof(char) * (len + 1));
	if (ret == NULL)
		return (NULL);

	for (len++; len--;)
		ret[len] = *--str;

	return (ret);
}

/**
 * _puts - Print an input string.
 * @str: The string to be printed.
 *
 * Return: Nothing.
 */
void _puts(char *str)
{
	int X = 0;

	if (str == NULL)
		return;

	while (str[X] != '\0')
	{
		_putchar(str[X]);
		X++;
	}
}

/**
 * _putchar - Write the character c to stdout.
 * @c: The character to print.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	static int X;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || X >= WRITE_BUF_SIZE)
	{
		write(1, buf, X);
		X = 0;
	}

	if (c != BUF_FLUSH)
		buf[X++] = c;

	return (1);
}

