/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:21:56 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/19 19:41:03 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <unistd.h>
// int main(void)
// {
//     char dest[20] = "Hello";  // Ensure enough space!
//     char *src = " World!";
//     unsigned int nb = 4;  // Copy 4 chars
//     ft_strncat(dest, src, nb);
//     // Print result
//     write(1, dest, 9);  // Output: "Hello Wor"
//     write(1, "\n", 1);
//     // Test nb > src length
//     ft_strncat(dest, "abc", 10);
//     write(1, dest, 12);  // Output: "Hello Worabc"
//     write(1, "\n", 1);
//     return (0);
// }