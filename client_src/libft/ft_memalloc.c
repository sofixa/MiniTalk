/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:37:08 by atodorov          #+#    #+#             */
/*   Updated: 2014/01/14 16:08:21 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void				*memory;
	unsigned int		counter;
	char				*explorer;

	counter = 0;
	memory = (void *) malloc(size);
	explorer = (char *)memory;
	if (memory != NULL)
	{
		while (counter++ < size)
			*explorer++ = 0;
	}
	return (memory);
}
