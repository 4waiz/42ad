/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:19:42 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/18 16:39:12 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
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
//     char *msg = "Hello, 42!";
//     int len = ft_strlen(msg);
//     write(1, "Length: ", 8);
//     ft_putnbr(len);  // Output: 10
//     write(1, "\n", 1);
//     return (0);
// }