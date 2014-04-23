/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 18:32:47 by atodorov          #+#    #+#             */
/*   Updated: 2013/11/26 18:33:19 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char		*dest;
	size_t		start;
	size_t		len;

	start = 0;
	len = ft_strlen(s);
	if (s != NULL && (dest = (char *) ft_memalloc(len * sizeof(char))))
	{
		while (s[start] == '\t' || s[start] == '\n' || s[start] == ' ')
			++start;
		while (--len >= start)
		{
			if (s[len] == '\t' || s[len] == '\n' || s[len] == ' ')
				dest[len - start] = '\0';
			else
				dest[len - start] = s[len];
		}
		return (dest);
	}
	return (NULL);
}
