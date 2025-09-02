/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address_i.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 14:17:56 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/09/02 15:21:01 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_address_i(unsigned long long n)
{
	char				hexa;
	unsigned long long	div;
	int					count;

	div = 1;
	count = 2;
	if (!n)
		return (ft_putstr_i("(nil)"));
	write(1, "0x", 2);
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
