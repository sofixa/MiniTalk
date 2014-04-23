/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 17:16:21 by amaurer           #+#    #+#             */
/*   Updated: 2014/01/08 17:42:44 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_arraylen(void *array)
{
	size_t	i;
	char	*tmp;

	if (!array)
		return (0);
	tmp = array;
	i = 0;
	if (!tmp[i])
		i++;
	return (i);
}
