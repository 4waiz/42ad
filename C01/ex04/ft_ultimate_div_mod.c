/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:53:53 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/18 16:11:08 by awaahmed         ###   ########.fr       */
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
// #include <unistd.h>
// // Helper to print numbers (recursive)
// void ft_putnbr(int n) {
//     if (n < 0) {
//         write(1, "-", 1);
//         n = -n;
//     }
//     if (n >= 10)
//         ft_putnbr(n / 10);
//     char c = (n % 10) + '0';
//     write(1, &c, 1);
// }
// int main(void) {
//     int a = 42;
//     int b = 5;
//     write(1, "Before: a=", 10);
//     ft_putnbr(a);       // Output: 42
//     write(1, " b=", 3);
//     ft_putnbr(b);       // Output: 5
//     write(1, "\n", 1);
//     ft_ultimate_div_mod(&a, &b);
//     write(1, "After:  a=", 10);
//     ft_putnbr(a);       // Output: 8 (42 / 5)
//     write(1, " b=", 3);
//     ft_putnbr(b);       // Output: 2 (42 % 5)
//     write(1, "\n", 1);
//     return (0);
// }