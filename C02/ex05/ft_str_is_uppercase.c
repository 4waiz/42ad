/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 19:20:39 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/18 19:28:13 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!((str[c] >= 'A' && str[c] <= 'Z')))
			return (0);
		c++;
	}
	return (1);
}

// #include <unistd.h>
// int main(void)
// {
//     char *test = "AWAIZ";
//     char result = ft_str_is_uppercase(test) + '0';
//     write(1, &result, 1);
//     write(1, "\n", 1);
//     return (0);
// }