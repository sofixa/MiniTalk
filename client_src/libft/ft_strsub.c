/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 17:00:01 by atodorov          #+#    #+#             */
/*   Updated: 2013/11/26 17:39:00 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*dest;
	size_t		i;

	i = 0;
	if (s != NULL)
	{
		if ((dest = (char *) ft_memalloc((len + 1) * sizeof(char))))
		{
			while (i < len && s[start] != '\0')
			{
				dest[i++] = s[start++];
			}
			return (dest);
		}
		return (NULL);
	}
	return (NULL);
}
