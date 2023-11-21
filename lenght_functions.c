#include "main.h"

/**
 * _strlen - count the number of character enter in param
 * @s: string to be checked
 *
 * Return: return the number of character of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _intlen - count the number of figures of the integer enter in param
 * @number: integer to be checked
 *
 * Return: return the number of figures of the integer
 * if is a negative number, the sign is counted.
 */
int _intlen(int number)
{
	int count = 1;
	int temp;

	if (number < 0)
	{
		number *= -1;
		count++;
	}
	temp = number / 10;
	while (temp > 0)
	{
		temp /= 10;
		count++;
	}
	return (count);
}

/**
 * _putchar - writes the character "c" to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
