/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:01:10 by awaahmed          #+#    #+#             */
/*   Updated: 2025/07/14 14:01:11 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    size_t i;
    unsigned char uc;
    
    str = (unsigned char *) s;
    uc = (unsigned char) c;
    i = 0;
    while (i < n)
    {
        if (str[i] == uc)
            return ((void *) &str[i]);
        i++;
    }
    return (NULL);
}