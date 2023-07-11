/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing_values.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 19:39:47 by ddutta            #+#    #+#             */
/*   Updated: 2023/06/15 16:34:00 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(int c, int *counter)
{
	write(1, &c, 1);
	(*counter)++;
}

void	ft_putstr(char	*s, int *counter)
{
	if (s == NULL)
	{
		write(1, "(null)", 6);
		*counter += 6;
		return ;
	}
	while (*s != '\0')
	{
		ft_putchar(*s, counter);
		s++;
	}
}
