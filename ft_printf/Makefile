# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddutta <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 15:15:56 by ddutta            #+#    #+#              #
#    Updated: 2023/05/19 15:24:23 by ddutta           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

files = ft_printf \
		printing_nums \
		printing_values

COMPILER	= gcc

CmpFlags 	= -Wall -Werror -Wextra

OUTN	= $(NAME)

CFILES 	= $(files:%=%.c)

OFILES  = $(files:%=%.o)

$(NAME):
	$(COMPILER) $(CmpFlags) -c $(CFILES) -I./
	ar -rc $(OUTN) $(OFILES)

all: $(NAME)

clean:
	rm -f $(NAME)
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
