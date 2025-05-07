/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 19:00:24 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/18 19:03:56 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= '0' && str[i] <= '9')))
			return (0);
		i++;
	}
	return (1);
}

// #include <unistd.h>
// void ft_putnbr(int n)
// {
//     char c = n + '0';
//     write(1, &c, 1);
// }
// int main(void)
// {
//     char *test1 = "12345";
//     char *test2 = "12a45";
//     char *test3 = "";
//     write(1, "Test1: ", 7);
//     ft_putnbr(ft_str_is_numeric(test1));  // Output: 1
//     write(1, "\nTest2: ", 8);
//     ft_putnbr(ft_str_is_numeric(test2));  // Output: 0
//     write(1, "\nTest3: ", 8);
//     ft_putnbr(ft_str_is_numeric(test3));  // Output: 1
//     write(1, "\n", 1);
//     return (0);
// }