/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:28:36 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/07/24 14:21:06 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		flag;

	flag = 1;
	i = 0;
	j = 0;
	while (s[i])
	{
		if ((s[i] != c) || (s[i] == c && s[i + 1] != c))
		{
			j++;
			i++;
		}
		while (flag == 1 && s[i] != '\0')
		{
			if (s[i] == c)
				flag = 0;
			i++;
		}
		if (flag == 0 && s[i] != '\0')
			flag = 1;
	}
	if (s[i] == c)
		j = j - 1;
	return (j);
}

static char	*word(size_t first, size_t last, char const *s)
{
	char	*string;
	size_t	size;
	size_t	i;

	i = 0;
	size = last - first;
	string = (char *)malloc(size * (sizeof(char)) + 1);
	if (!string)
		return (NULL);
	while (first != last)
	{
		string[i] = s[first];
		first++;
		i++;
	}
	string[i] = '\0';
	return (string);
}

static	void	*free_all(char **s, size_t size)
{
	while (size > 0)
	{
		free(s[size]);
		size--;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		k;
	size_t	size;
	size_t	i;
	size_t	j;

	size = count_words(s, c);
	res = malloc((size + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	if (!s)
		return ((void*)0);
	while (i < ft_strlen(s))
	{
		while (s[i] == c)
            		i++;
		if (s[i] != c)
			j = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i] == '\0' && s[i - 1] == c)
			break;
		res[k] = word(j, i, s);
		if (!(*res))
			return (free_all(res, size));
		i++;
		k++;
	}
	res[k] = NULL;
	return (res);
}


/*
int main(){
//      split       this for   me  !       *
#include <stdio.h>
    char    **resss = ft_split("      split       this for   me  !       ", ' ');
    int    i = 0;
    while (i < 5)
    {
        printf("%s:corte\n", resss[i]);
        i++;
    }
    return 0;
}
*/
