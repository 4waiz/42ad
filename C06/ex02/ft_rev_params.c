/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:15:43 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/25 17:05:25 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	l;

	i = 1;
	l = argc - 1;
	while (i < argc)
	{
		j = 0;
		while (argv[l][j])
		{
			ft_putchar(argv[l][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
		l--;
	}
}
