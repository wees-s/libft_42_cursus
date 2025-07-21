/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:15:40 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/07/19 17:50:30 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp_mem;
	size_t	i;

	temp_mem = malloc(count * size);
	i = 0;
	if (!temp_mem)
		return (NULL);
	while (i < count * size)
	{
		temp_mem[i] = 0;
		i++;
	}
	return (temp_mem);
}
