/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/10 21:41:01 by atodorov          #+#    #+#             */
/*   Updated: 2014/01/14 16:09:42 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_realloc(void *ptr, size_t new)
{
	void	*new_ptr;

	if (ptr == NULL)
		return (malloc(new));
	if (new == 0)
		return (ptr);
	new_ptr = malloc(new);
	ft_memcpy(new_ptr, ptr, new);
	return (new_ptr);
}
