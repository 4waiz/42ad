/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lehelpers.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 10:42:08 by awaahmed          #+#    #+#             */
/*   Updated: 2025/09/14 10:42:10 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static int	ft_count1(unsigned int n)
{
	int	len;

	len = 1;
	while (n >= 10)
	{
		len++;
		n /= 10;
	}
	return (len);
}

int	ft_putuns(unsigned int n)
{
	if (n >= 10)
	{
		if (ft_putuns(n / 10) == -1)
			return (-1);
	}
	if (ft_putchar((n % 10) + '0') == -1)
		return (-1);
	return (ft_count1(n));
}

static int	ft_count2(unsigned int n)
{
	int	len;

	len = 1;
	while (n >= 16)
	{
		len++;
		n /= 16;
	}
	return (len);
}

int	ft_puthex(unsigned int n, char format)
{
	if (n >= 16)
	{
		if (ft_puthex(n / 16, format) == -1)
			return (-1);
	}
	if (format == 'x')
	{
		if (ft_putchar("0123456789abcdef"[n % 16]) == -1)
			return (-1);
	}
	else if (format == 'X')
	{
		if (ft_putchar("0123456789ABCDEF"[n % 16]) == -1)
			return (-1);
	}
	return (ft_count2(n));
}

int	ft_putstr(char *s)
{
	int	len;
	int	res;

	if (!s)
		return (ft_putstr("(null)"));
	len = 0;
	while (s[len])
	{
		res = ft_putchar(s[len]);
		if (res == -1)
			return (-1);
		len++;
	}
	return (len);
}
