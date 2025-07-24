/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:28:47 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/07/24 15:22:06 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*n_string;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s) || start + len > ft_strlen(s))
		return (ft_strdup(""));
	n_string = (char *)malloc(sizeof(*s) * len + 1);
	if (!n_string)
		return (NULL);
	i = 0;
	while (i < len)
	{
		n_string[i] = s[start + i];
		i++;
	}
	n_string[i] = '\0';
	return (n_string);
}
