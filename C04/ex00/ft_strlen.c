/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 07:16:20 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/20 07:25:35 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

// #include <unistd.h>
// int ft_strlen(char *str);
// int main(void)
// {
//     char *test = "Hello";
//     int length = ft_strlen(test); 
//     // Convert number to character (works for 0-9)
//     char result = length + '0'; 
//     write(1, "Length: ", 8);
//     write(1, &result, 1);
//     write(1, "\n", 1); 
//     return 0;
// }