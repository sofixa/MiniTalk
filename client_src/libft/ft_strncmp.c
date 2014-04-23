/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 13:37:54 by atodorov          #+#    #+#             */
/*   Updated: 2014/02/08 14:44:41 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const void *s1, const void *s2, size_t n)
{
	char		*src1;
	char		*src2;
	size_t		i;

	i = 0;
	src1 = (char *) s1;
	src2 = (char *) s2;
	while (src1[i] == src2[i] && i < n)
	{
		if (src1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (src1[i] - src2[i]);
}
