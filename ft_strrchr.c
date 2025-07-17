/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:56:23 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/07/17 14:03:41 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	char	*temp;
	size_t	i;

	i = 0;
	cc = (char)c;
	temp = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == cc)
			temp = (char *)&s[i];
		i++;
	}
	if (cc == '\0')
		return ((char *)&s[i]);
	return (temp);
}
