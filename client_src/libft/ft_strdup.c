/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 13:45:24 by atodorov          #+#    #+#             */
/*   Updated: 2014/01/14 16:08:55 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	l;
	char	*dup;
	int		i;

	i = 0;
	l = ft_strlen(str);
	if ((dup = (char*)malloc(sizeof(char) * (l + 1))) != NULL)
	{
		while (*str != '\0')
		{
			dup[i++] = *str++;
		}
		dup[i] = '\0';
		return (dup);
	}
	return (NULL);
}
