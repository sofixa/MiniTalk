/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/04 14:28:11 by atodorov          #+#    #+#             */
/*   Updated: 2013/12/29 18:38:05 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static int		ft_get_line(int const fd, char *buff, char **line, size_t size)
{
	ssize_t		ret;
	size_t		i;

	i = 0;
	while (buff[i] != '\n')
	{
		if ((ret = read(fd, buff + i, 1)) == -1)
			return (ret);
		if ((buff[i] == '\n') || (!ret))
		{
			buff[i] = 0;
			*line = buff;
			return (ret);
		}
		else if ((i + 1 == size) || (buff[i]))
		{
			buff = (char *) ft_realloc(buff, size + i);
			if (buff == 0)
				return (-1);
			size = size + i;
		}
		i++;
	}
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	char			*buff;
	size_t			size;

	if ((size = BUFF_SIZE) <= 0)
	{
		return (-1);
	}
	buff = ft_memalloc(size + 1);
	return (ft_get_line(fd, buff, line, size));
}
