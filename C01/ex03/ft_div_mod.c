/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:52:27 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/18 15:57:59 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// #include <unistd.h>
// void ft_putnbr(int n) {
//     if (n >= 10) 
//         ft_putnbr(n / 10);
//     char c = (n % 10) + '0';
//     write(1, &c, 1);
// }
// int main(void) {
//     int a = 42;
//     int b = 5;
//     int div_result, mod_result;

//     ft_div_mod(a, b, &div_result, &mod_result);

//     write(1, "Div: ", 5);
//     ft_putnbr(div_result);  // Output: 8
//     write(1, "\nMod: ", 6);
//     ft_putnbr(mod_result);  // Output: 2
//     write(1, "\n", 1);

//     return (0);
// }