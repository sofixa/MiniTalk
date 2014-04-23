/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraydup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 18:00:58 by amaurer           #+#    #+#             */
/*   Updated: 2013/12/20 18:45:58 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_arraydup(void *array, size_t len)
{
	void	*out;

	if (!array)
		return (NULL);
	out = ft_memalloc(len);
	ft_memcpy(out, array, len);
	return (out);
}
