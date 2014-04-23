/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 16:14:09 by atodorov          #+#    #+#             */
/*   Updated: 2013/11/22 16:17:07 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		x;

	i = 0;
	x = 0;
	while (s1[i])
	{
		i++;
	}
	while (s2[x] && x < n)
	{
		s1[i] = s2[x];
		i++;
		x++;
	}
	s1[i] = '\0';
	return (s1);
}
