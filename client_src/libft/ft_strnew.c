/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:06:48 by atodorov          #+#    #+#             */
/*   Updated: 2014/02/08 14:44:52 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char				*returned_str;
	unsigned int		counter;

	counter = - 1;
	if (!(returned_str = malloc(size)))
	{
		return (0);
	}
	while (++counter < size)
	{
		returned_str[counter] = '\0';
	}
	returned_str[counter] = '\0';
	return (returned_str);
}
