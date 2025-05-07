/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 18:01:57 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/18 18:23:30 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

// #include <unistd.h>
// int main(void)
// {
//     char src[] = "Hello 42!";
//     char dest[20];  // Ensure enough space
//     ft_strcpy(dest, src);
//     // Print result character-by-character
//     int i = 0;
//     while (dest[i])
//     {
//         write(1, &dest[i], 1);
//         i++;
//     }
//     write(1, "\n", 1);
//     return (0);
// }