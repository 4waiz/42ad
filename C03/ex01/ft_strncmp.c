/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:21:50 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/19 19:34:17 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
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
//     // Test 1: Equal strings (full comparison)
//     char *s1 = "Hello";
//     char *s2 = "Hello";
//     int ret = ft_strncmp(s1, s2, 5);
//     write(1, "Test1: ", 7);
//     ft_putnbr(ret);  // Output: 0
//     write(1, "\n", 1);
//     // Test 2: Partial comparison (n < difference)
//     ret = ft_strncmp("Hello", "Hell", 4);
//     write(1, "Test2: ", 7);
//     ft_putnbr(ret);  // Output: 0 (first 4 chars match)
//     write(1, "\n", 1);
//     // Test 3: Early difference
//     ret = ft_strncmp("Hello", "Hallo", 5);
//     write(1, "Test3: ", 7);
//     ft_putnbr(ret);  // Output: ('e' - 'a' = 4)
//     write(1, "\n", 1);
//     return (0);
// }