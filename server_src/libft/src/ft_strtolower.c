/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 14:56:14 by amaurer           #+#    #+#             */
/*   Updated: 2013/11/26 15:12:22 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtolower(char const *s)
{
	char	*out;
	int		i;

	out = ft_strdup(s);
	i = 0;
	while (s[i])
	{
		out[i] = ft_tolower((char) s[i]);
		i++;
	}
	return (out);
}
