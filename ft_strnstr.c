/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 10:16:59 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/07/19 11:00:45 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)&big[i]);
	if (len == 0)
		return (NULL);
	while (i <= len && big[i] != '\0')
	{
		j = 0;
		while ((big[i] == needle[j]) && big[i] != '\0')
		{
			if (i >= len)
				break ;
			i++;
			j++;
		}
		if (j >= ft_strlen(needle) && i <= len)
			return ((char *)&big[i - j]);
		i++;
	}
	return (NULL);
}
