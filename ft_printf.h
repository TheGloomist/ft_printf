/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/16 16:31:44 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/07/11 16:36:46 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_strlen(char *str);
int	print_str(char *str);
int	print_char(int c, size_t *len);
int	print_nbr(int n);
int	print_unsigned_dec(unsigned int n);
int	print_lhex(unsigned long n);
int	print_uphex(unsigned int n);

#endif