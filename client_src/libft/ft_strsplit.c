/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 20:22:33 by atodorov          #+#    #+#             */
/*   Updated: 2014/02/08 14:45:40 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char		**ft_malloc(size_t size)
{
	char	**str;

	str = (char**) malloc(sizeof(char*) * (size + 1));
	if (str == 0)
		return (NULL);
	ft_bzero(str, size);
	return (str);
}

static int		ft_count(const char *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			j++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (j);
}

char			**ft_strsplit(const char *s, char c)
{
	char	**str;
	int		j;
	int		i;
	int		c2;
	int		y;

	i = ft_count(s, c);
	c2 = 0;
	j = 0;
	str = ft_malloc(i + 1);
	while (s[j])
	{
		y = 0;
		while (s[j] == c && s[j] != '\0')
			j++;
		y = j;
		while (s[j] != c && s[j] != '\0')
			j++;
		if (c2 != i)
			str[c2++] = ft_strsub(s, y, (j - y));
	}
	str[c2] = '\0';
	return (str);
}
