/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:00:43 by awaahmed          #+#    #+#             */
/*   Updated: 2025/08/18 20:20:10 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *ptr)
{
	unsigned long long	sum;
	int					sign;

	sum = 0;
	sign = 1;
	while (*ptr == ' ' || (*ptr >= 9 && *ptr <= 13))
		ptr++;
	if (*ptr == '+' || *ptr == '-')
	{
		if (*ptr == '-')
			sign = -1;
		ptr++;
	}
	while (*ptr >= '0' && *ptr <= '9')
	{
		sum = (sum * 10) + (*ptr - '0');
		if (sign == 1 && sum > LLONG_MAX)
			return (-1);
		else if (sign == -1 && sum > LLONG_MAX)
			return (0);
		ptr++;
	}
	return ((int)(sign * sum));
}
