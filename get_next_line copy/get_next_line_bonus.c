/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaahmed <awaahmed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 12:29:42 by awaahmed          #+#    #+#             */
/*   Updated: 2026/01/17 17:43:55 by awaahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static int	read_loop(int fd, char **stash, char *buf)
{
	ssize_t	rd;
	char	*tmp;

	rd = 1;
	while (!ft_strchr(*stash, '\n') && rd > 0)
	{
		rd = read(fd, buf, BUFFER_SIZE);
		if (rd <= 0)
			break ;
		buf[rd] = '\0';
		tmp = ft_strjoin(*stash, buf);
		free(*stash);
		*stash = tmp;
		if (!*stash)
			return (-1);
	}
	if (rd < 0)
		return (-1);
	return (0);
}

static char	*read_to_stash(int fd, char *stash)
{
	char	*buf;

	buf = (char *)malloc((size_t)BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	if (read_loop(fd, &stash, buf) < 0)
	{
		free(buf);
		free(stash);
		return (NULL);
	}
	free(buf);
	return (stash);
}

static char	*extract_line(char *stash)
{
	size_t	len;
	char	*line;
	char	*nl;

	if (!stash || !*stash)
		return (NULL);
	nl = ft_strchr(stash, '\n');
	if (nl)
		len = (size_t)(nl - stash) + 1u;
	else
		len = ft_strlen(stash);
	line = ft_substr(stash, 0, len);
	return (line);
}

static char	*update_stash(char *stash)
{
	char	*nl;
	char	*new_stash;

	if (!stash)
		return (NULL);
	nl = ft_strchr(stash, '\n');
	if (!nl)
	{
		free(stash);
		return (NULL);
	}
	new_stash = ft_substr(nl + 1, 0, ft_strlen(nl + 1));
	free(stash);
	return (new_stash);
}

char	*get_next_line(int fd)
{
	static char	*stash[FD_MAX];
	char		*line;
	int			had_nl;

	if (fd < 0 || fd >= FD_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	stash[fd] = read_to_stash(fd, stash[fd]);
	if (!stash[fd])
		return (NULL);
	line = extract_line(stash[fd]);
	if (!line)
	{
		free(stash[fd]);
		stash[fd] = NULL;
		return (NULL);
	}
	had_nl = (ft_strchr(stash[fd], '\n') != NULL);
	stash[fd] = update_stash(stash[fd]);
	if (had_nl && !stash[fd])
	{
		free(line);
		return (NULL);
	}
	return (line);
}
