#include "main.h"

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
	int num_temp;

	if (number < 0)
	{
		number *= -1;
		count++;
	}
	num_temp = number / 10;
	while (num_temp > 0)
	{
		num_temp /= 10;
		count++;
	}
	return (count);
}

/*---------------------------------------------------------------------------*/

/**
 * converted_int_to_string - copy each digit of the parameter "number"
 * in the array "str" for can print the value of number
 *
 * Description: this function takes in parameter an 'int' with its lenght, if
 * this value is negative, change its value in positive. Next, takes each
 * digit of this value and copy that in the order inverse of the array. if
 * negative, print the sign '-' at the begining of the array.
 *
 * @number: is the "int" type value to print
 * @str: is the address of the array where we will copy the value of "number"
 * @lenght: is the length of the number of characters of "number"
 */
void converted_int_to_string(int number, char *str, int lenght)
{
	int i = lenght;
	int sign = 0;

	if (number < 0)
	{
		number *= -1;
		sign = 1;
	}
	str[i] = '\0';
	for (--i; number > 0; i--)
	{
		if (number == INT_MIN)
			str[i] = '8';
		else
			str[i] = ((number % 10) + '0');
		number /= 10;
	}
	if (sign == 1)
		str[i] = '-';
}

/*---------------------------------------------------------------------------*/

/**
 * print_INT_MIN - print the value of INT_MIN
 *
 * Return: number of character printed
*/
int print_INT_MIN(void)
{
	char tab[] = "-2147483648";

	return (write(1, &tab, 11));
}

/*---------------------------------------------------------------------------*/
