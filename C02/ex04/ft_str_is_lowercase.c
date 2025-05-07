/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 19:04:40 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/18 19:06:20 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!((str[c] >= 'a' && str[c] <= 'z')))
			return (0);
		c++;
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
//     char *test1 = "hello";
//     char *test2 = "Hello";
//     char *test3 = "";
//     write(1, "Test1: ", 7);
//     ft_putnbr(ft_str_is_lowercase(test1));  // Output: 1
//     write(1, "\nTest2: ", 8);
//     ft_putnbr(ft_str_is_lowercase(test2));  // Output: 0
//     write(1, "\nTest3: ", 8);
//     ft_putnbr(ft_str_is_lowercase(test3));  // Output: 1
//     write(1, "\n", 1);
//     return (0);
// }