/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 07:16:27 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/28 22:14:55 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	
	int	sum;
	int	n;
	int	sign;

	n = 0;
	sum = 0;
	sign = 1;
	while (str[n] == ' ' || (str[n] >= 9 && str[n] <= 13))
		++n;
	while (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
			sign *= -1;
		n++;
	}
	while (str[n] >= '0' && str[n] <= '9')
	{
		sum = (sum * 10) + (str[n] - '0');
		n++;
	}
	return (sign * sum);
}

// #include <unistd.h>
// // Helper function to print strings
// void ft_putstr(char *str)
// {
//     while (*str)
//         write(1, str++, 1);
// }

// // Helper function to print numbers
// void ft_putnbr(int n)
// {
//     if (n == -2147483648) {
//         ft_putstr("-2147483648");
//         return;
//     }
//     if (n < 0) {
//         write(1, "-", 1);
//         n = -n;
//     }
//     if (n >= 10)
//         ft_putnbr(n / 10);
//     write(1, &"0123456789"[n % 10], 1);
// }

// int main(void)
// {
//     ft_putstr("Testing ft_atoi:\n");
//     ft_putstr("'42' → ");
//     ft_putnbr(ft_atoi("42"));
//     ft_putstr("\n'-17' → ");
//     ft_putnbr(ft_atoi("+-+123"));
//     return 0;
// }