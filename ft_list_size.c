/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 14:43:16 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/09/02 15:20:30 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_list_size(t_list *begin_list)
{
	int			i;
	t_list		*index;

	index = begin_list;
	i = 0;
	while (index)
	{
		i++;
		index = index -> next;
	}
	return (i);
}
