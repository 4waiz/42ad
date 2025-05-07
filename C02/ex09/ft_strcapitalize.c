/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 20:41:27 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/18 21:10:03 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
// #include <unistd.h>
// int	main(void)
// {
// 	char	str1[] = "my name Is AWAIZ ahmed";
// 	char	str2[] = "hello world";
// 	char	str3[] = "";
// 	ft_strcapitalize(str1);
// 	write(1, str1, sizeof(str1) - 1);
// 	write(1, "\n", 1);
// 	ft_strcapitalize(str2);
// 	write(1, str2, sizeof(str2) - 1);
// 	write(1, "\n", 1);
// 	ft_strcapitalize(str3);
// 	write(1, "Empty\n", 6);
// 	return (0);
// }