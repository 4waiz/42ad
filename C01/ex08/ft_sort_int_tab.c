/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:48:38 by awaahmed          #+#    #+#             */
/*   Updated: 2025/05/07 22:40:54 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	tmp;

	a = 0;
	while (a < size)
	{
		b = 0;
		while (b < size)
		{
			if (tab[a] <= tab[b])
			{
				tmp = tab[a];
				tab[a] = tab[b];
				tab[b] = tmp;
			}
			b++;
		}
		a++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	arr[] = {5, 3, 2, 4, 1};
// 	int	size = 5;
// 	int	i = 0;

// 	ft_sort_int_tab(arr, size);
// 	while (i < size)
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }