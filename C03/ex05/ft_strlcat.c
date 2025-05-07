/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 19:11:10 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/19 20:19:53 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;
	unsigned int	sum;

	i = 0;
	sum = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size > d)
		sum = d + s;
	else
		sum = s + size;
	while (src[i] && size > (d + 1))
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (sum);
}

// #include <unistd.h>
// int main(void)
// {
//     // Test 1: Basic test
//     char dest[20] = "Hello";
//     ft_strlcat(dest, " World", 20);
//     write(1, dest, ft_strlen(dest));
//     write(1, "\n", 1);
//     // Test 2: Not enough spacecd 
//     char dest2[10] = "Hi";
//     ft_strlcat(dest2, " everyone!", 10);
//     write(1, dest2, ft_strlen(dest2));
//     write(1, "\n", 1);
//     return 0;
// }