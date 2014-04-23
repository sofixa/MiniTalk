/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:05:51 by amaurer           #+#    #+#             */
/*   Updated: 2013/11/25 16:19:53 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, void const *s2, size_t n)
{
	char		*s3;
	char const	*s4;

	if (!s1)
		return (NULL);
	s3 = s1;
	s4 = s2;
	while (n--)
		*s3++ = *s4++;
	return (s1);
}
