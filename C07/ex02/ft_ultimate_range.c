/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:55:15 by awaahmed          #+#    #+#             */
/*   Updated: 2025/04/25 20:31:08 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	array = (int *) malloc(sizeof(int) * ((max - min)));
	if (array == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (size);
}

// int main(void)
// {
//     int min = 1;
//     int max = 106;
//     int *range;
//     int size;
//     int i;
//     size = ft_ultimate_range(&range, min, max);    
//     printf("Range size: %d\n", size);
//     if (size > 0)
//     {
//         i = 0;
//         while (i < size)
//         {
//             printf("%d ", range[i]);
//             i++;
//         }
//         printf("\n");
//         free(range);
//     }
//     return (0);
// }