/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:53:53 by awaahmed          #+#    #+#             */
/*   Updated: 2025/05/07 22:40:45 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	x = 3;
// 	int	y = 9;

// 	ft_ultimate_div_mod(&x, &y);
// 	printf("div: %d, mod: %d\n", x, y);
// 	return (0);
// }