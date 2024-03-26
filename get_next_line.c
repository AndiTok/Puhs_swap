/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:34:00 by atok              #+#    #+#             */
/*   Updated: 2023/03/18 18:18:31 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char	*read_file(int fd, char *str)
{
	char	*tmpstr;
	char	*bin;
	int		i;

	if (str == 0x00)
		str = ft_strdup("");
	i = 1;
	tmpstr = ft_calloc(BUFFER_SIZE + 1, sizeof (char));
	while (i > 0)
	{
		i = read(fd, tmpstr, BUFFER_SIZE);
		if (i == -1)
		{
			free(tmpstr);
			return (NULL);
		}
		tmpstr[i] = 0x00;
		bin = str;
		str = ft_strjoin(str, tmpstr);
		free(bin);
		if (ft_strchr(tmpstr, '\n'))
			break ;
	}
	free(tmpstr);
	return (str);
}

char	*get_line(char *str)
{
	char	*line;
	int		i;

	i = 0;
	if (str[i] == 0x00)
		return (NULL);
	while (str[i] != 0x00 && str[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (str[i] != 0x00 && str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	if (str[i] != 0x00 && str[i] == '\n')
		line[i++] = '\n';
	line[i] = 0x00;
	return (line);
}

char	*remaining(char *str)
{
	int		i;
	int		j;
	char	*remaining;

	i = 0;
	while (str[i] != 0x00 && str[i] != '\n')
		i++;
	if (str[i] == 0x00)
	{
		free (str);
		return (NULL);
	}
	remaining = ft_calloc(ft_strlen(str) - i + 1, sizeof(char));
	i++;
	j = 0;
	while (str[i] != 0x00)
		remaining[j++] = str[i++];
	free(str);
	return (remaining);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;

	if (BUFFER_SIZE <= 0 || fd < 0 || read(fd, 0, 0) < 0)
		return (NULL);
	str = read_file(fd, str);
	if (str == NULL)
		return (NULL);
	line = get_line(str);
	str = remaining(str);
	return (line);
}
