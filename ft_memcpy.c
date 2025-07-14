/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:02:27 by awaahmed          #+#    #+#             */
/*   Updated: 2025/07/14 14:02:28 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char    *tmp_dst;
    unsigned char    *tmp_src;
    
    if (dst == (void *)0 && src == (void *)0)
        return (dst);

    tmp_dst = (unsigned char *) dst;
    tmp_src = (unsigned char *) src;

    while (n > 0)
    {
        *(tmp_dst++) = *(tmp_src++);
        n--;
    }
    return (dst);
}