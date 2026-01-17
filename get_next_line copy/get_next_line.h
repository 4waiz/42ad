
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 08:25:40 by awaahmed          #+#    #+#             */
/*   Updated: 2026/01/17 17:43:55 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);

size_t	gnl_strlen(const char *s);
char	*gnl_strdup(const char *s);
char	*gnl_strchr(const char *s, int c);
char	*gnl_substr(const char *s, unsigned int start, size_t len);
char	*gnl_strjoin(char const *s1, char const *s2);

#endif
