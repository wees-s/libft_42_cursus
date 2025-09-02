/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:35:44 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/09/02 15:24:42 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
int		ft_strncmp(const char *string1, const char *string2, size_t count);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_atoi(const char *string);

char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *needle, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	**ft_split(char const *s, char c);

void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putendl_fd(char *s, int fd);
void	ft_bzero(void *s, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *string);

/* ft_printf header*/

int		ft_putchar_i(int c);
int		ft_putstr_i(char *s);
int		ft_putnbr_i(int i);
int		ft_puthex_i_lower(unsigned int n);
int		ft_puthex_i_upper(unsigned int n);
int		ft_printf(const char *str, ...);
int		ft_selec_hex(unsigned int n, const char *s);
int		ft_print_address_i(unsigned long long n);
int		ft_unsignednbr_i(unsigned int n);
int		ft_output(const char *str, va_list args);

/* struct and lists */

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

void	ft_list_push_front(t_list **begin_list, void *data);
void	ft_list_push_back(t_list **begin_list, void *data);

int		ft_list_size(t_list *begin_list);

t_list	*ft_list_last(t_list *begin_list);
t_list	*ft_create_elem(void *data);
t_list	*ft_list_push_strs(int size, char **strs);

/* ft_printf */

int		ft_putchar_i(int c);
int		ft_putstr_i(char *s);
int		ft_putnbr_i(int i);
int		ft_puthex_i_lower(unsigned int n);
int		ft_puthex_i_upper(unsigned int n);
int		ft_printf(const char *str, ...);
int		ft_selec_hex(unsigned int n, const char *s);
int		ft_print_address_i(unsigned long long n);
int		ft_unsignednbr_i(unsigned int n);
int		ft_output(const char *str, va_list args);
int		ft_printf(const char *str, ...);

#endif
