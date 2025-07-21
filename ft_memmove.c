/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 09:51:49 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/07/21 14:26:48 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
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
}*/
#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    /* declaring our 2 temporary pointers and our counter */
    char    *c_src;
    char    *c_dst;
    size_t    i;

    /* if both src and dst are NULL, we directly return NULL */
    if (!dst && !src)
        return (NULL);
    /* assigning the converted values of src and dst to our temporary
     * pointers so that we don't touch the original values
     */
    c_src = (char *) src;
    c_dst = (char *) dst;
    i = 0;
    /* checking if the address of the destination is greater than the
     * address of the source, if that's the case we'll copy from end to
     * start
     */
    if (c_dst > c_src)
        while (len-- > 0)
            c_dst[len] = c_src[len];
    /* if the address of the destination is not greater than the address
     * of the source, we'll copy from start to end, like we're used to
     */
    else
    {
        while (i++ < len)
            c_dst[i] = c_src[i];
    }
    return (dst);
}
