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

int	print_nbr(long int num)
{
	char	c;

	if (num < 0)
	{
		print_char('-');
		num = num * -1;
	}
	if (num >= 10)
		return (print_nbr(num / 10) + print_nbr(num % 10));
	c = num + '0';
	return (write(1, &c, 1));
}

int	print_unsigned_dec(unsigned int num)
{
	char	c;

	if (num >= 10)
		return (print_unsigned_dec(num / 10) + print_unsigned_dec(num % 10));
	c = num + '0';
	return (write(1, &c, 1));
}