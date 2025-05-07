/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:21:54 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/30 16:17:10 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
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
//     char *src = " Awaiz!";
//     ft_strcat(dest, src);
//     // Print result
//     write(1, dest, 12);  // Output: "Hello Awaiz!"
//     write(1, "\n", 1);
//     // Test empty src
//     ft_strcat(dest, "");
//     write(1, dest, 12);  // Output: "Hello Awaiz!"
//     write(1, "\n", 1);
//     return (0);
// }