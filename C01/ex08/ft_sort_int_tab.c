/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:48:38 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/18 16:56:46 by awaahmed         ###   ########.fr       */
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

// #include <unistd.h>
// void ft_putnbr(int n)
// {
//     if (n >= 10)
//         ft_putnbr(n / 10);
//     char c = (n % 10) + '0';
//     write(1, &c, 1);
// }
// int main(void)
// {
//     int tab[] = {4, 2, 9, 1, 5};
//     int size = 5;
//     // Print original array
//     write(1, "Before: ", 8);
//     for (int i = 0; i < size; i++)
//     {
//         ft_putnbr(tab[i]);
//         write(1, " ", 1);
//     }
//     write(1, "\n", 1);
//     // Sort the array
//     ft_sort_int_tab(tab, size);
//     // Print sorted array
//     write(1, "After:  ", 8);
//     for (int i = 0; i < size; i++)
//     {
//         ft_putnbr(tab[i]);
//         write(1, " ", 1);
//     }
//     write(1, "\n", 1);
//     return (0);
// }