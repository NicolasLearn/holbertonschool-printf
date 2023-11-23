#include "main.h"

/**
 * check_symbol - symbol
 *
 * Description: description
 *
 * @current_char: arg
 * @array_symbol: arg
 *
 * Return: return
*/
int check_symbol(char current_char, Format_type array_symbol[])
{
	int index = 0;

	while (array_symbol[index].letter != '\0')
	{
		if (array_symbol[index].letter == current_char)
			return (index);
		index++;
	}
	return (index);
}

/*---------------------------------------------------------------------------*/

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

/*---------------------------------------------------------------------------*/

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
