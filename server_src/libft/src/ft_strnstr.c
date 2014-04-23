/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:03:11 by amaurer           #+#    #+#             */
/*   Updated: 2014/02/03 13:35:42 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *s1, char const *s2, size_t n)
{
	char	*save;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	if ((!*s1 && !*s2) || (*s1 && !*s2))
		return ((char *) s1);
	if (!*s1 && *s2)
		return (NULL);
	save = (char *) s2;
	while (*s1 && n)
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
		n--;
	}
	return (NULL);
}
