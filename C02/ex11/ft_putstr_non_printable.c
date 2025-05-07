/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:52:35 by awaahmed          #+#    #+#             */
/*   Updated: 2025/05/01 19:00:52 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_d(unsigned char c)
{
	char	*d;

	d = "0123456789abcdef";
	ft_putchar(d[c / 16]);
	ft_putchar(d[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] == 127)
		{
			ft_putchar('\\');
			ft_d(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

// int	main(void)
// {
// 	char *str = "Hello\nHow are you?";
// 	ft_putstr_non_printable(str);
// } 