/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 14:18:13 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/09/02 15:21:55 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_selec_hex(unsigned int n, const char *s)
{
	if (*s == 'x')
		return (ft_puthex_i_lower(n));
	else if (*s == 'X')
		return (ft_puthex_i_upper(n));
	return (0);
}

int	ft_puthex_i_lower(unsigned int n)
{
	char				hexa;
	unsigned int		div;
	int					count;

	count = 0;
	div = 1;
	if (n == 0)
		return (ft_putchar_i('0'));
	while ((n / div) >= 0 && div <= n / 16)
		div = div * 16;
	while (div > 0)
	{
		if ((n / div) <= 9)
			hexa = (n / div) + '0';
		else
			hexa = ((n / div) - 10) + 'a';
		count += ft_putchar_i(hexa);
		n = n % div;
		div = div / 16;
	}
	return (count);
}

int	ft_puthex_i_upper(unsigned int n)
{
	char				hexa;
	unsigned int		div;
	int					count;

	count = 0;
	div = 1;
	if (n == 0)
		return (ft_putchar_i('0'));
	while ((n / div) >= 0 && div <= n / 16)
		div = div * 16;
	while (div > 0)
	{
		if ((n / div) <= 9)
			hexa = (n / div) + '0';
		else
			hexa = ((n / div) - 10) + 'A';
		count += ft_putchar_i(hexa);
		n = n % div;
		div = div / 16;
	}
	return (count);
}
