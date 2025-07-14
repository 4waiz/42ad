/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:02:34 by awaahmed          #+#    #+#             */
/*   Updated: 2025/07/14 14:02:35 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char    *tmp_ptr;
    
    tmp_ptr = (unsigned char *) b;
    while (len > 0)
    {
        *(tmp_ptr++) = (unsigned char) c;
        len--;
    }
    return (b);
}