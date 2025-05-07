/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:13:41 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/18 21:17:15 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_lenght(src));
}

// #include <unistd.h>
// void ft_putnbr(unsigned int n)
// {
//     if (n >= 10)
//         ft_putnbr(n / 10);
//     char c = (n % 10) + '0';
//     write(1, &c, 1);
// }
// int main(void)
// {
//     char src[] = "Hello 42!";
//     char dest[10];
//     unsigned int size = sizeof(dest);
//     unsigned int ret;
//     ret = ft_strlcpy(dest, src, size);
//     write(1, "Copied: ", 8);
//     write(1, dest, ft_lenght(dest));
//     write(1, "\nReturn: ", 9);
//     ft_putnbr(ret);  // Output: 9
//     write(1, "\n", 1);
// }