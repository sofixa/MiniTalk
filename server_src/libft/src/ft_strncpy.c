/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/17 15:06:15 by amaurer           #+#    #+#             */
/*   Updated: 2014/02/04 17:41:12 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!n)
		return (NULL);
	i = 0;
	while (s2[i] && i < n)
	{
		s1[i] = s2[i];
		++i;
	}
	if (!s2[i] && i < n)
		while (i < n)
		{
			s1[i] = '\0';
			++i;
		}
	return (s1);
}
