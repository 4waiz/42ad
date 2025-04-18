/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:20:44 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/18 16:47:18 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	size--;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
		size--;
	}
}

// #include <unistd.h>
// void ft_putnbr(int n)
// {
//     if (n < 0) {
//         write(1, "-", 1);
//         n = -n;
//     }
//     if (n >= 10)
//         ft_putnbr(n / 10);
//     char c = (n % 10) + '0';
//     write(1, &c, 1);
// }
// int main(void)
// {
//     int tab[] = {1, 2, 3, 4, 5};
//     int size = 5;
//     // Print original array
//     write(1, "Before: ", 8);
//     for (int i = 0; i < size; i++) {
//         ft_putnbr(tab[i]);
//         write(1, " ", 1);
//     }
//     write(1, "\n", 1);
//     // Reverse the array
//     ft_rev_int_tab(tab, size);
//     // Print reversed array
//     write(1, "After:  ", 8);
//     for (int i = 0; i < size; i++) {
//         ft_putnbr(tab[i]);
//         write(1, " ", 1);
//     }
//     write(1, "\n", 1);
//     return (0);
// }