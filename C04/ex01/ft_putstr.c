/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 07:16:23 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/20 07:27:52 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		write(1, &str[n], 1);
		n++;
	}
}

// int main(void)
// {
//     ft_putstr("Hello");    // Normal case
//     ft_putstr("");         // Empty string
//     ft_putstr("\nTest\n"); // With newlines
//     return 0;
// }