/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:25:06 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/07/26 14:16:57 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	char	*n_string;
	int		i;

	i = 0;
	if (!s1 || !set)
		return (ft_strdup(""));
	last = ft_strlen(s1);
	first = 0;
	while ((s1 && set) && ft_strchr(set, s1[first]) && first <= last)
		first++;
	while ((s1 && set) && ft_strchr(set, s1[last]) && first <= last)
		last--;
	n_string = malloc(last - first * sizeof(char) + 2);
	if (!n_string)
		return (ft_strdup(NULL));
	while (first <= last)
	{
		n_string[i] = s1[first];
		first++;
		i++;
	}
	n_string[i] = '\0';
	return (n_string);
}
