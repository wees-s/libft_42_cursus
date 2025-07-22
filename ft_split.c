/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:28:36 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/07/22 18:02:22 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
char **ft_split(char const *s, char c)
{
	size_t	strings;

	strings = (char **)malloc(sizeof(char *) * (count_arr(s, c) + 1));
	return ((char **)"$");
}
size_t	count_arr(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}*/
#include "libft.h"

static char		**free_all(char	**s, size_t	n);
static size_t	count_word(char const	*s, char	c);
static size_t	count_words(char const	*s, char	c);
static char		**split(char	**result, char const	*s, char	c);

char	**ft_split(char const	*s, char c)
{
	char	**result;
	size_t	qtd_words;

	if (!s)
		return (NULL);
	qtd_words = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (qtd_words + 1));
	if (!result)
		return (NULL);
	return (split(result, s, c));
}

static size_t	count_words(char const	*s, char	c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			counter++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (counter);
}

static size_t	count_word(char const	*s, char	c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**split(char	**result, char const	*s, char	c)
{
	size_t	i;
	size_t	qtd_words;

	i = 0;
	qtd_words = count_words(s, c);
	while (i < qtd_words)
	{
		while (*s)
		{
			if (*s != c)
			{
				result[i] = (char *)malloc(sizeof(char)
						* (count_word(s, c) + 1));
				ft_strlcpy(result[i], s, count_word(s, c) + 1);
				if (!result[i])
					return (free_all(result, qtd_words));
				s += count_word(s, c);
				i++;
			}
			else
				s++;
		}
	}
	result[i] = NULL;
	return (result);
}

static char	**free_all(char	**s, size_t	n)
{
	while (n--)
		free(s[n]);
	free(s[n]);
	free(s);
	return (NULL);
}
