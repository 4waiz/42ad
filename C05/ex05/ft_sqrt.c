/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 08:02:18 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/21 20:27:10 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void) 
// {
// 	printf("Square Root: %d\n", ft_sqrt(4));
// }