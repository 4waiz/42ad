/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:40:17 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/16 14:29:12 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}
// int main(void) {
// 	ft_is_negative(3);
// 	write(1,"\n",1);
// 	ft_is_negative(-3);
// 	write(1,"\n",1);
// 	ft_is_negative(1);
// 	write(1,"\n",1);
// }
