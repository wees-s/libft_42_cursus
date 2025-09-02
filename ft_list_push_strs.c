/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 14:42:55 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/09/02 14:49:48 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int			i;
	t_list		*begin_list;

	i = 1;
	if (size == 0)
		return (NULL);
	begin_list = ft_create_elem(strs[0]);
	if (!begin_list)
		return (NULL);
	while (i < size)
	{
		ft_list_push_back(&begin_list, strs[i]);
		i++;
	}
	return (begin_list);
}
