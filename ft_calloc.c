/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:00:51 by awaahmed          #+#    #+#             */
/*   Updated: 2025/07/14 14:00:52 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    unsigned char *tmp;
    size_t i;
    
    i = 0;
    tmp = malloc(count * size);
    if (!tmp)
        return (NULL);
    while (i < count * size)
        tmp[i++] = 0;
    return (tmp);
}