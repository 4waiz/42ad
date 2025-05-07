/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:41:13 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/16 14:31:57 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn_r(int n, int start, int current, int output[])
{
	int	a;
	int	b;

	if (current == n)
	{
		a = 0;
		while (a < n)
		{
			ft_putchar(output[a] + '0');
			a++;
		}
		if (output[0] != 10 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	b = start;
	while (b <= (10 - (n - current)))
	{
		output[current] = b;
		ft_print_combn_r(n, b + 1, current + 1, output);
		b++;
	}
}

void	ft_print_combn(int n)
{
	int	output[10];

	if (n > 0 && n < 10)
		ft_print_combn_r(n, 0, 0, output);
	else
		return ;
}

// int main(void) 
// {
// 	ft_print_combn(1);
// 	write(1,"\n",1);
// }