/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:02:36 by awaahmed          #+#    #+#             */
/*   Updated: 2025/07/14 14:02:37 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    unsigned int    i;
    char            cc;
    cc = (char) c;
    i = 0;
    while (s[i])
    {
        if (s[i] == cc)
            return ((char *) &s[i]);
        i++;
    }
    if (s[i] == cc)
        return ((char *) &s[i]);
    return (NULL);
}