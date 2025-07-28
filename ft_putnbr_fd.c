/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 13:53:38 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/07/28 16:21:06 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		div;
	char	c;

	div = 1;
	if (!fd)
		fd = 1;
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			n = -n;
			ft_putchar_fd('-', fd);
		}
		while (n / div > 10)
			div = div * 10;
		while (n >= 0 && div != 0)
		{
			c = n / div + 48;
			ft_putchar_fd(c, fd);
			n = n % div;
			div = div / 10;
		}
	}
}
