/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 09:51:49 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/07/24 15:02:57 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*temp_dst;
	unsigned char	*temp_src;
	size_t			i;

	if (!src || !dst)
		return (NULL);
	i = 0;
	temp_dst = (unsigned char *)dst;
	temp_src = (unsigned char *)src;
	if (temp_src > temp_dst)
	{
		while (len-- > 0)
		temp_dst[len] = temp_src[len];
	}
	else
	{
		while (i++ < len)
			temp_dst[i] = temp_src[i];
	}
	return (dst);
}
