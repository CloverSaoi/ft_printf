/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:48:46 by ddutta            #+#    #+#             */
/*   Updated: 2023/06/15 16:16:44 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//includes
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>

// prototypes
int		ft_printf(const char *str, ...);
void	ft_putchar(int c, int *counter);
void	ft_putstr(char *s, int *counter);
void	ft_print_as_hex_x(unsigned int nb, int *counter);
void	ft_print_as_hex_xbig(unsigned int nb, int *counter);
void	ft_putnbr(int c, int *counter);
void	ft_put_unsigned(unsigned int c, int *counter);
void	ft_put_pointer(size_t p, int *counter);
#endif
