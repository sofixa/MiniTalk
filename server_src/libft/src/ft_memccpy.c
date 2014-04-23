/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:05:51 by amaurer           #+#    #+#             */
/*   Updated: 2013/12/22 15:30:16 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, void const *s2, int c, size_t n)
{
	char		*s3;
	char const	*s4;

	if (!s1)
		return (NULL);
	s3 = s1;
	s4 = s2;
	while (n--)
	{
		*s3 = *s4;
		if (*s3 == (char) c)
			return (++s3);
		s3++;
		s4++;
	}
	return (NULL);
}
