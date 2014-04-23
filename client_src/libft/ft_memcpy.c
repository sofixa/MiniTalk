/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:20:51 by atodorov          #+#    #+#             */
/*   Updated: 2013/12/18 15:39:18 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	while (i < n)
	{
		*((char *)s1 + i) = *((char *)s2 + i);
		i += 1;
	}
	return (s1);
}
