/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splits_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/03 19:06:06 by amaurer           #+#    #+#             */
/*   Updated: 2014/02/03 19:06:58 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_splits_count(char **splits)
{
	int	i;

	if (!splits)
		return (0);
	i = 0;
	while (splits[i])
		i++;
	return (i);
}
