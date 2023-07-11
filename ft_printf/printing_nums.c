/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing_nums.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 19:39:06 by ddutta            #+#    #+#             */
/*   Updated: 2023/06/15 16:21:27 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int c, int *counter)
{
	if (c == -2147483648)
		return (ft_putstr("-2147483648", counter));
	if (c == 2147483647)
		return (ft_putstr("2147483647", counter));
	if (c < 0)
	{
		ft_putchar('-', counter);
		c *= -1;
	}
	if (c >= 10)
	{
		ft_putnbr(c / 10, counter);
		c = c % 10;
	}
	if (c < 10)
		ft_putchar(c + '0', counter);
}

void	ft_put_unsigned(unsigned int c, int *counter)
{
	if (c == 4294967295)
		return (ft_putstr("4294967295", counter));
	if (c >= 10)
	{
		ft_put_unsigned(c / 10, counter);
		c = c % 10;
	}
	if (c < 10)
	{
		ft_putchar(c + '0', counter);
	}
}

void	ft_print_as_hex_x(unsigned int nb, int *counter)
{
	int		i;
	char	to_print[25];
	char	*arr;

	arr = "0123456789abcdef";
	if (nb == 0)
	{
		ft_putchar('0', counter);
		return ;
	}
	i = 0;
	while (nb > 0)
	{
		to_print[i] = arr[nb % 16];
		nb = nb / 16;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(to_print[i], counter);
		i--;
	}
}

void	ft_print_as_hex_xbig(unsigned int nb, int *counter)
{
	int		i;
	char	to_print[25];
	char	*arr;

	arr = "0123456789ABCDEF";
	if (nb == 0)
	{
		ft_putchar('0', counter);
		return ;
	}
	i = 0;
	while (nb > 0)
	{
		to_print[i] = arr[nb % 16];
		nb = nb / 16;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(to_print[i], counter);
		i--;
	}
}

void	ft_put_pointer(size_t nb, int *counter)
{
	int			i;
	char		to_print[25];
	const char	arr[] = "0123456789abcdef";

	write(1, "0x", 2);
	*counter = *counter + 2;
	if (nb == 0)
	{
		ft_putchar('0', counter);
		return ;
	}
	i = 0;
	while (nb > 0)
	{
		to_print[i] = arr[nb % 16];
		nb = nb / 16;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(to_print[i], counter);
		i--;
	}
}
