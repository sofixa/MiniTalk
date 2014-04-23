/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:03:11 by amaurer           #+#    #+#             */
/*   Updated: 2014/01/24 17:33:38 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *s1, char const *s2)
{
	char	*save;
	int		i;

	if ((!*s1 && !*s2) || (*s1 && !*s2))
		return ((char *) s1);
	if (!*s1 && *s2)
		return (NULL);
	save = (char *) s2;
	while (*s1)
	{
		if (*s1 == *s2)
			s2++;
		else
			s2 = save;
		if (!*s2)
		{
			i = ft_strlen(save) - 1;
			return ((char *) s1 - i);
		}
		s1++;
	}
	return (NULL);
}
