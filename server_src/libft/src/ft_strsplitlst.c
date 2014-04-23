/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplitlst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/25 22:58:52 by amaurer           #+#    #+#             */
/*   Updated: 2014/01/25 23:05:16 by amaurer          ###   ########.fr       */
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

t_list		*ft_strsplitlst(char const *s, char c)
{
	int		nb_splits;
	t_list	*splits;
	char	*next;
	char	*word;

	nb_splits = count_splits(s, c);
	splits = NULL;
	while (nb_splits)
	{
		next = ft_strchr(s, c);
		if (s != next)
		{
			word = (next) ? ft_strsub(s, 0, next - s) : ft_strdup(s);
			if (!splits)
				splits = ft_lstnew(word, ft_strlen(word));
			else
				ft_lstpush(&splits, ft_lstnew(word, ft_strlen(word)));
			nb_splits--;
		}
		s = ++next;
	}
	return (splits);
}
