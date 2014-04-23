/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/25 22:50:47 by amaurer           #+#    #+#             */
/*   Updated: 2014/01/25 22:57:47 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_splits(char const *s, char c);

static int	count_splits(char const *s, char c)
{
	char	*next;
	int		i;

	if (!s || !ft_strlen(s))
		return (0);
	i = (s[ft_strlen(s) - 1] == c) ? 0 : 1;
	next = (char*) s;
	while ((next = ft_strchr(s, c)))
	{
		if (s != next)
			i++;
		s = ++next;
	}
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	int		nb_splits;
	char	**splits;
	int		i;
	char	*next;

	nb_splits = count_splits(s, c);
	splits = (char**) ft_memalloc(sizeof(*splits) * (nb_splits + 1));
	i = 0;
	while (i < nb_splits)
	{
		next = ft_strchr(s, c);
		if (s != next)
		{
			splits[i] = (next) ? ft_strsub(s, 0, next - s) : ft_strdup(s);
			i++;
		}
		s = ++next;
	}
	splits[i] = NULL;
	return (splits);
}
