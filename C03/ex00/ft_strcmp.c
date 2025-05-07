/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:21:46 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/30 14:13:48 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
#include <stdio.h>

int main(void)
{
	char str1[] = "abc";
	char str2[] = "abcd";

	printf("Comparing '%s' and '%s': %d\n", str1, str2, ft_strcmp(str1, str2));
	return (0);
}