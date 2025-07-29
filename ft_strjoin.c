/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:11:37 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/07/25 18:06:27 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_size;
	size_t	i;
	char	*n_string;

	s1_size = ft_strlen(s1);
	n_string = (char *)malloc(s1_size + ft_strlen(s2) + 1);
	if (!n_string)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		n_string[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		n_string[s1_size] = s2[i];
		i++;
		s1_size++;
	}
	n_string[s1_size] = '\0';
	return (n_string);
}
