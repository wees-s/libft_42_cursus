/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:06:03 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/07/19 11:31:05 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;
	size_t	j;

	len_src = ft_strlen(src);
	if (!dst)
		return (len_src);
	len_dst = ft_strlen(dst);
	if ((size <= len_dst) || (size == 0))
		return (len_src + size);
	j = 0;
	i = len_dst;
	while (i < (size - 1) && j < len_src)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (len_dst + len_src);
}
