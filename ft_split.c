/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:28:36 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/07/23 17:08:37 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int	flag;

	flag = 1;
	i = 0;
	j = 0;
	while (s[i])
	{
		if ((s[i] != c) || (s[i] == c && s[i + 1] != c))
			j++;
			i++;
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

char	*word(size_t first, size_t last, char const *s)
{
	char	*string;
	size_t	size;

	size = last - first;
	string = (char *)malloc(size * sizeof(char));
	if (!string)
		return (NULL);
	while (first < last)
		*string++ = *s++;
	*string++ = '\0';
	return (word);
}

char **ft_split(char const *s, char c)
{
	char *end = "$"; //APENAS PARA N DER CRASH
	char	**res;
	res = malloc((count_words(s, c) + 1) * sizeof(char *));
	res[i] = word(1, 2, "abacaxi");
	return 0;
}

int main()//teste
{
	ft_split("aa,bb,cc,dd", ',');
	return 0;
}
