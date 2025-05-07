/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 19:08:41 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/18 20:10:23 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32 && str[i] <= 126)))
			return (0);
		i++;
	}
	return (1);
}

// #include <unistd.h>
// int main(void)
// {
//     char *test1 = "ABC123 ~!@";
//     char result1 = ft_str_is_printable(test1) + '0';
//     write(1, &result1, 1);  // Prints '1'
//     write(1, "\n", 1);
//     char test2[] = {65, 7, 66, 0};  // 'A', BELL, 'B', null terminator
//     char result2 = ft_str_is_printable(test2) + '0';
//     write(1, &result2, 1);  // Prints '0'
//     write(1, "\n", 1);
//     char *test3 = "";
//     char result3 = ft_str_is_printable(test3) + '0';
//     write(1, &result3, 1);  // Prints '1'
//     write(1, "\n", 1);
//     return (0);
// }