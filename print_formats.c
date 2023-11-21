#include "main.h"

/**
 * print_percent - print the char "%"
 *
 * Description: if the next char of the symbol "%" in the function _printf
 * is "%", we must print the symbol
 *
 * Return: the number of characters printed
 */
int print_percent(void)
{
	char percent = '%';

	write(1, &percent, 1);
	return (1);
}

/**
 * print_char - print a char got in param
 *
 * Descritpion: if the symbol is "c", we must print value of matching argument,
 * got with the current_arg enter in parameter.
 *
 * @current_arg: value of parameter, of type "char",
 * matching with the symbol "c"
 *
 * Return: the number of characters printed
 */
int print_char(va_list current_arg)
{
	char temp = va_arg(current_arg, int);

	if (temp == 0)
		return (0);
	write(1, &temp, 1);
	return (1);
}

/**
 * print_string - print a string got in parameter
 *
 * Description: if the symbol is "s", we must print value of matching argument,
 * got with the current_arg enter in parameter.
 *
 * @current_arg: value of parameter, of type "string",
 * matching with the symbol "s"
 *
 * Return: the number of characters printed
 */
int print_string(va_list current_arg)
{
	int len_str = 0;
	char *str = va_arg(current_arg, char *);

	if (str == NULL)
		return (0);
	len_str = _strlen(str);
	write(1, str, len_str);
	return (len_str);
}

/**
 * print_int - value print of an integer got in parameter
 *
 * Description: if the symbol is "d" or "i",
 * we must print value of matching argument,
 * got with the current_arg enter in parameter.
 * For print, we must translate value of type "int" in
 * type "char".
 *
 * @current_arg: value of parameter, of type "int",
 * matching with the symbol "d" or "i".
 *
 * Return: the number of characters printed
 */
int print_int(va_list current_arg)
{
	int len_temp = 0;
	int temp = va_arg(current_arg, int);

	len_temp = _intlen(temp);
	write(1, &temp, sizeof(int));
	return (len_temp);
}
