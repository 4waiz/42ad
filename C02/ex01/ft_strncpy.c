/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 18:16:05 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/18 18:28:22 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <unistd.h>
// void ft_putstr(char *str)
// {
//     while (*str)
//         write(1, str++, 1);
// }
// int main(void)
// {
//     char src[] = "Hello";
//     char dest[10];
//     unsigned int n = 8;
//     ft_strncpy(dest, src, n);
//     ft_putstr(dest);  // Output: Hello
//     write(1, "\n", 1);
//     // Verify padding by printing raw bytes
//     for (unsigned int i = 0; i < n; i++)
//     {
//         if (dest[i] == '\0')
//             write(1, "\\0", 2);
//         else
//             write(1, &dest[i], 1);
//     }
//     write(1, "\n", 1);
//     return (0);
// }