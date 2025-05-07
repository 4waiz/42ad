/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 19:10:14 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/19 20:00:09 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			++j;
		}
		++i;
	}
	return (0);
}

// #include <unistd.h>
// void ft_putstr(char *str)
// {
//     while (*str)
//         write(1, str++, 1);
// }
// int main(void)
// {
//     char str[] = "Hello 42 World";
//     char *found;
//     // Test 1: Normal find
//     found = ft_strstr(str, "42");
//     ft_putstr(found);  // Output: "42 World"
//     write(1, "\n", 1);
//     // Test 2: Not found
//     found = ft_strstr(str, "Paris");
//     if (!found)
//         write(1, "Not found\n", 10);  // Output: "Not found"
//     // Test 3: Empty to_find
//     found = ft_strstr(str, "");
//     ft_putstr(found);  // Output: "Hello 42 World"
//     write(1, "\n", 1);
//     return (0);
// }