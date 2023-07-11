/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:53:51 by ddutta            #+#    #+#             */
/*   Updated: 2023/06/15 16:16:59 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_printf.h"

static void	ft_conversion_checker(char c, int *counter, int *i, va_list ap)
{
	if (c == '%')
		ft_putchar('%', counter);
	else if (c == 'c')
		ft_putchar(va_arg(ap, int), counter);
	else if (c == 's')
		ft_putstr(va_arg(ap, char *), counter);
	else if (c == 'x')
		ft_print_as_hex_x(va_arg(ap, unsigned int), counter);
	else if (c == 'X')
		ft_print_as_hex_xbig(va_arg(ap, unsigned int), counter);
	else if (c == 'u')
		ft_put_unsigned(va_arg(ap, unsigned int), counter);
	else if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(ap, int), counter);
	else if (c == 'p')
		ft_put_pointer(va_arg(ap, size_t), counter);
	else
		(*i)--;
}

int	ft_printf(const char	*str, ...)
{
	va_list	arg_lst;
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	va_start(arg_lst, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_conversion_checker(str[i], &counter, &i, arg_lst);
			i++;
		}
		else
		{
			ft_putchar(str[i], &counter);
			i++;
		}
	}
	va_end(arg_lst);
	return (counter);
}
