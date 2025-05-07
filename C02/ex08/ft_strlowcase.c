/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 20:34:37 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/18 20:39:43 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// #include <unistd.h>
// int main(void)
// {
//     char str1[] = "HELLO 42!";
//     ft_strlowcase(str1);
//     write(1, str1, 9);
//     write(1, "\n", 1);
//     return (0);
// }