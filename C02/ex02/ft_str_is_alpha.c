/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 18:32:43 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/18 18:59:29 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
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
//     char *test1 = "Hello";
//     char *test2 = "H3ll0";
//     char *test3 = "";
//     write(1, "Test1: ", 7);
//     ft_putnbr(ft_str_is_alpha(test1));  // Output: 1
//     write(1, "\nTest2: ", 8);
//     ft_putnbr(ft_str_is_alpha(test2));  // Output: 0
//     write(1, "\nTest3: ", 8);
//     ft_putnbr(ft_str_is_alpha(test3));  // Output: 1
//     write(1, "\n", 1);
//     return (0);
// }