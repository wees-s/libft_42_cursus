# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/15 11:17:28 by wedos-sa          #+#    #+#              #
#    Updated: 2025/09/02 15:16:20 by wedos-sa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_atoi.c			\
	ft_isalpha.c			\
	ft_isdigit.c			\
	ft_isalnum.c			\
	ft_isprint.c			\
	ft_strlen.c				\
	ft_isascii.c			\
	ft_toupper.c			\
	ft_tolower.c			\
	ft_strlcpy.c			\
	ft_strncmp.c			\
	ft_strdup.c				\
	ft_bzero.c				\
	ft_memset.c				\
	ft_memcmp.c				\
	ft_memcpy.c				\
	ft_strlcat.c			\
	ft_strchr.c				\
	ft_strrchr.c			\
	ft_memchr.c				\
	ft_strnstr.c			\
	ft_calloc.c				\
	ft_substr.c				\
	ft_strjoin.c			\
	ft_strtrim.c			\
	ft_split.c				\
	ft_itoa.c				\
	ft_strmapi.c			\
	ft_striteri.c			\
	ft_putendl_fd.c			\
	ft_putchar_fd.c			\
	ft_putstr_fd.c			\
	ft_putnbr_fd.c			\
	ft_memmove.c			\
	ft_list_push_strs.c		\
	ft_list_push_back.c		\
	ft_list_size.c			\
	ft_list_push_front.c	\
	ft_create_elem.c		\
	ft_list_last.c			\
	ft_print_utils.c		\
	ft_printf.c				\
	ft_print_address_i.c	\
	ft_print_hex.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
	@echo "================================================="
	@echo "LINK ALL IN --> $(NAME)"

%.o: %.c
	@echo "Compiling --> $(<) --> $(@)"
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "================================================="

clean:
	@echo "Cleaning (rm -f)"
	@echo "================================================="
	rm -f $(OBJS)

fclean:	clean
	@echo "================================================="
	@echo "Cleaning (rm -f)"
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
