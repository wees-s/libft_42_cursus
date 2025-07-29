# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/15 11:17:28 by wedos-sa          #+#    #+#              #
#    Updated: 2025/07/29 11:34:49 by wedos-sa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_atoi.c	\
	ft_isalpha.c	\
	ft_isdigit.c	\
	ft_isalnum.c	\
	ft_isprint.c	\
	ft_strlen.c	\
	ft_isascii.c	\
	ft_toupper.c	\
	ft_tolower.c	\
	ft_strlcpy.c	\
	ft_strncmp.c	\
	ft_strdup.c	\
	ft_bzero.c	\
	ft_memset.c	\
	ft_memcmp.c	\
	ft_memcpy.c	\
	ft_strlcat.c	\
	ft_strchr.c	\
	ft_strrchr.c	\
	ft_memchr.c	\
	ft_strnstr.c	\
	ft_calloc.c	\
	ft_substr.c	\
	ft_strjoin.c	\
	ft_strtrim.c	\
	ft_split.c	\
	ft_itoa.c	\
	ft_strmapi.c	\
	ft_striteri.c	\
	ft_putendl_fd.c	\
	ft_putchar_fd.c	\
	ft_putstr_fd.c	\
	ft_putnbr_fd.c	\
	ft_memmove.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
	@echo "LINK ALL IN --> $(NAME)"

bonus:
	@echo "EMPTY"

%.o: %.c
	@echo "Compiling --> $(<) --> $(@)"
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "================================================="

clean:
	@echo "Cleaning (rm -f)"
	rm -f $(OBJS)

fclean:	clean
	@echo "Cleaning (rm -f)"
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
