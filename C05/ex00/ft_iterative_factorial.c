/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 08:02:04 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/21 21:40:36 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		r *= nb;
		nb--;
	}
	return (r);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("Factorial = %d\n", ft_iterative_factorial(3));
// }