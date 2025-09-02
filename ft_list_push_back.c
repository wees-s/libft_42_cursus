/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 14:42:20 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/09/02 14:50:25 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*last;
	t_list	*item;

	if (!begin_list)
		return ;
	item = ft_create_elem(data);
	if (!item)
		return ;
	if (!*begin_list)
	{
		*begin_list = item;
		return ;
	}
	last = ft_list_last(*begin_list);
	last->next = item;
}
