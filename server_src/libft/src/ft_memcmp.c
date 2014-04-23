/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 16:06:28 by amaurer           #+#    #+#             */
/*   Updated: 2013/11/25 16:40:11 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(void const *s1, void const *s2, size_t n)
{
	unsigned char const	*s3;
	unsigned char const	*s4;
	int					r;

	s3 = s1;
	s4 = s2;
	r = 0;
	while (n-- && !r)
		r = *s3++ - *s4++;
	return (r);
}
