/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:02:58 by awaahmed          #+#    #+#             */
/*   Updated: 2025/07/14 14:02:59 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    
    i = 0;
    j = 0;
    if (needle[0] == 0)
        return ((char *) haystack);
    while (haystack[i] && i < len)
    {
        while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
        {
            j++;
            if (needle[j] == 0)
                return ((char *) haystack + i);
        }
        i++;
        j = 0;
    }
    return (0);
}