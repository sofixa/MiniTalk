/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:54:27 by atodorov          #+#    #+#             */
/*   Updated: 2014/02/08 14:44:15 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const char		*src;

	src = s;
	i = 0;
	while (i < n)
	{
		if (src[i] == (unsigned char) c)
			return ((void *) src + i);
		i++;
	}
	return (NULL);
}

