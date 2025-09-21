/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 10:43:23 by awaahmed          #+#    #+#             */
/*   Updated: 2025/09/18 20:24:16 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthex_ptr(unsigned long n)
{
	int	len;
	int	ret;

	len = 0;
	if (n >= 16)
	{
		ret = ft_puthex_ptr(n / 16);
		if (ret == -1)
			return (-1);
		len += ret;
	}
	ret = ft_putchar("0123456789abcdef"[n % 16]);
	if (ret == -1)
		return (-1);
	return (len + 1);
}

int	ft_putptr(void *ptr)
{
	int	len;
	int	ret;

	if (!ptr)
		return (ft_putstr("0x0"));
	len = ft_putstr("0x");
	if (len == -1)
		return (-1);
	ret = ft_puthex_ptr((unsigned long)ptr);
	if (ret == -1)
		return (-1);
	return (len + ret);
}
