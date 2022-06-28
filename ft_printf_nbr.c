/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_nbr.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/18 21:56:17 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/06/21 15:55:09 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr(int num)
{
	size_t	len;
	long	n;

	n = num;
	len = 0;
	if (n < 0)
	{
		print_char('-', &len);
		n = n * -1;
		if (n > 10)
		{
			print_nbr(n / 10);
			len++;
		}
		print_char(n % 10 + '0', &len);
	}
	else if (n >= 10)
	{
		print_nbr(n / 10);
		len++;
		print_char(n % 10 + '0', &len);
	}
	else
		print_char(n + '0', &len);
	return (len);
}

int	print_unsigned_dec(unsigned int num)
{
	size_t			len;
	unsigned long	n;

	len = 0;
	n = num;
	if (n >= 10)
	{
		print_nbr(n / 10);
		len++;
		print_char(n % 10 + '0', &len);
	}
	else
		print_char(n + '0', &len);
	return (len);
}
