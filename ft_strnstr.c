/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 10:16:59 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/07/29 11:45:25 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char *)&big[j]);
	while (big[i] && i < len)
	{
		while ((big[i + j] == needle[j]) && big[i + j] && (i + j) < len)
		{
			j++;
			if (needle[j] == 0)
				return ((char *)&big[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
