#include "main.h"

/**
 * print_unknow_symbol - print '%' and the current_char.
 *
 * Description: if the character after "%" is not a conversion specifier
 * we must print the symbol "%" and this character.
 *
 * @current_char: is the character after "%" to be print.
 * @current_arg: unused parameter. Here for used the function print_percent.
 *
 * Return: the number of character printed.
*/
int print_unknow_symbol(char current_char, va_list current_arg)
{
	int count = 0;

	count += print_percent(current_arg);
	count += write(1, &current_char, 1);
	return (count);
}

/*---------------------------------------------------------------------------*/

/**
 * print_percent - print the char "%".
 *
 * Description: if the next char of the symbol "%" in the function _printf
 * is "%", we must print the symbol.
 *
 * @current_arg: unused parameter. Here for used the function in my struct.
 *
 * Return: the number of characters printed.
 */
int print_percent(va_list current_arg)
{
	(void)current_arg;

	return (_putchar('%'));
}

/*---------------------------------------------------------------------------*/

/**
 * print_char - print a char got in param.
 *
 * Descritpion: if the next char of the symbol "%" in the function _printf
 * is "c", we must print value of matching argument,
 * got with the current_arg enter in parameter.
 *
 * @current_arg: value of parameter, of type "char",
 * matching with the symbol "c".
 *
 * Return: the number of characters printed.
 */
int print_char(va_list current_arg)
{
	char current_value = va_arg(current_arg, int);

	return (write(1, &current_value, 1));
}

/*---------------------------------------------------------------------------*/

/**
 * print_string - print a string got in parameter.
 *
 * Description: if the next char of the symbol "%" in the function _printf
 * is "s", we must print value of matching argument,
 * got with the current_arg enter in parameter.
 *
 * @current_arg: value of parameter, of type "string",
 * matching with the symbol "s".
 *
 * Return: the number of characters printed.
 */
int print_string(va_list current_arg)
{
	int len_str = 0;
	char *str = va_arg(current_arg, char *);

	if (str == NULL)
	{
		char null[] = "(null)";

		return (write(1, &null, 6));
	}
	len_str = _strlen(str);
	return (write(1, str, len_str));
}

/*---------------------------------------------------------------------------*/

/**
 * print_int - value print of an integer got in parameter.
 *
 * Description: if the next char of the symbol "%" in the function _printf
 * is "d" or "i", we must print value of matching argument,
 * got with the current_arg enter in parameter.
 * For print, we must translate value of type "int" in
 * type "char".
 *
 * @current_arg: value of parameter, of type "int",
 * matching with the symbol "d" or "i".
 *
 * Return: the number of characters printed.
 */
int print_int(va_list current_arg)
{
	char tab_buffer[15];
	int current_value = va_arg(current_arg, int);
	int lenght_current_value = _intlen(current_value);

	if (current_value == 0)
		return (_putchar('0'));
	if (current_value == INT_MIN)
		return (print_INT_MIN());
	converted_int_to_string(current_value, tab_buffer, lenght_current_value);
	return (write(1, &tab_buffer, lenght_current_value));
}
