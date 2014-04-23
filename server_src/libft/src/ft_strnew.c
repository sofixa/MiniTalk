/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:36:30 by amaurer           #+#    #+#             */
/*   Updated: 2013/11/20 17:40:20 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*out;

	out = (char *) malloc(sizeof(char) * (size + 1));
	if (!out)
		return (NULL);
	ft_bzero(out, size + 1);
	return (out);
}
