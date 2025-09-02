/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 15:23:17 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/09/02 15:21:18 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar_i(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr_i(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr_i(int n)
{
	char	*nb;
	int		count;

	count = 0;
	nb = ft_itoa(n);
	count = ft_putstr_i(nb);
	free(nb);
	return (count);
}

int	ft_unsignednbr_i(unsigned int n)
{
	int					count;
	unsigned int		div;
	char				c;

	count = 0;
	div = 1;
	while (n / div >= 10)
		div = div * 10;
	while (n >= 0 && div != 0)
	{
		c = n / div + 48;
		count += ft_putchar_i(c);
		n = n % div;
		div = div / 10;
	}
	return (count);
}
