/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmekarni <rmekarni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 13:28:39 by rmekarni          #+#    #+#             */
/*   Updated: 2013/12/02 17:04:00 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*dst;
	const char	*src;

	dst = s1;
	src = s2;
	if (!n)
		return (s1);
	if (s1 <= s2)
		return (ft_memcpy(s1, s2, n));
	src += n;
	dst += n;
	while (n--)
		*--dst = *--src;
	return (s1);
}

