/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 10:44:38 by awaahmed          #+#    #+#             */
/*   Updated: 2025/09/14 11:10:17 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(int n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	long	nb;
	int		len;

	nb = n;
	len = ft_count(n);
	if (nb < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		nb = -nb;
	}
	if (nb > 9)
	{
		if (ft_putnbr(nb / 10) == -1)
			return (-1);
	}
	if (ft_putchar(nb % 10 + '0') == -1)
		return (-1);
	return (len);
}

int	ft_putchar(char c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}
