/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 16:38:31 by atodorov          #+#    #+#             */
/*   Updated: 2013/11/22 16:45:17 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (c == s[i])
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
