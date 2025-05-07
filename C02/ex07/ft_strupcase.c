/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 20:23:27 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/18 20:33:56 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// #include <unistd.h>
// int main(void)
// {
//     // Test 1: Mixed case string
//     char str1[] = "Hello 42!";
//     ft_strupcase(str1);
//     write(1, str1, 9);  // Output: "HELLO 42!"
//     write(1, "\n", 1);
//     // Test 2: Already uppercase
//     char str2[] = "ABCD";
//     ft_strupcase(str2);
//     write(1, str2, 4);  // Output: "ABCD"
//     write(1, "\n", 1);
//     // Test 3: Empty string
//     char str3[] = "";
//     ft_strupcase(str3);
//     write(1, "Empty\n", 6);  // Just confirms no crash
//     return (0);
// }