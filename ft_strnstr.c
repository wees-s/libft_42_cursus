/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 10:16:59 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/07/28 18:58:14 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	*ft_strnstr(const char *big, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	if (!needle || needle[i] == '\0')
		return ((char *)&big[i]);
	if (len > ft_strlen(big))
		len = ft_strlen(big);
	while ((big[j] && needle [i]) && (j < len && i < len))
	{
		while (big[j] == needle[i] && (i < len && j < len))
		{
			i++;
			j++;
		}
		if (needle[i] == '\0')
		{
			size = j - ft_strlen(needle);
			return ((char *)&big[size]);
		}
		i = 0;
		j++;
	}
	return (NULL);
}
*/
char	*ft_strnstr(const char	*s1, const char	*s2, size_t	len)
{
	size_t	i;
	size_t	j;
	size_t	s2_len;

	s2_len = ft_strlen(s2);
	if (!s2_len)
		return ((char *)s1);
	i = 0;
	while (s1[i] && (i + s2_len <= len))
	{
		if (s1[i] == s2[0])
		{
			j = 0;
			while (s1[i + j] && s2[j])
			{
				if (s1[i + j] != s2[j])
					break ;
				else if (j == s2_len - 1)
					return ((char *)s1 + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
