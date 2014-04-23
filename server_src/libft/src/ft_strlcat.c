/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmekarni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/16 22:21:59 by rmekarni          #+#    #+#             */
/*   Updated: 2013/11/24 15:12:19 by rmekarni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t n)
{
	size_t	d_size;
	size_t	l;
	size_t	r;

	d_size = ft_strlen(d);
	l = ft_strlen(s);
	if (n < d_size)
		return (n + l);
	r = d_size + l;
	if (d_size < n)
	{
		d += d_size;
		n -= d_size;
		if (l >= n)
			l = n - 1;
		d[l] = '\0';
		ft_memcpy(d, s, l);
	}
	return (r);
}

