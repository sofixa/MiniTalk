/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:16:47 by amaurer           #+#    #+#             */
/*   Updated: 2013/12/22 15:31:06 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, char const *s2, size_t n)
{
	char	*s3;
	char	*s4;

	s4 = ft_strdup(s2);
	s3 = s1 + ft_strlen(s1);
	while (*s4 && n > 0)
	{
		*s3 = *s4;
		s4++;
		s3++;
		n--;
	}
	*s3 = '\0';
	return (s1);
}
