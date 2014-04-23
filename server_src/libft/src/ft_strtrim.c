/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 13:01:53 by amaurer           #+#    #+#             */
/*   Updated: 2013/12/01 17:16:34 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_first_letter(char const *s)
{
	int		i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == ','
		|| s[i] == '\r' || s[i] == '\v' || s[i] == '\f')
	{
		if (s[i] == ',' && s[i + 1] == ' ')
			i++;
		else if (s[i] == ',')
			break ;
		i++;
	}
	return (i);
}

static int	find_last_letter(char const *s)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = ft_strrev(ft_strdup(s));
	while (s2[i] == ' ' || s2[i] == '\n' || s2[i] == '\t' || s2[i] == '\r'
		|| s2[i] == '\v' || s2[i] == '\f')
	{
		if (s2[i] == ' ' && s2[i + 1] == ',')
			i++;
		i++;
	}
	return (ft_strlen(s) - i);
}

char		*ft_strtrim(char const *s)
{
	char				*out;
	unsigned int		start;
	unsigned int		end;

	if (!s)
		return (NULL);
	start = find_first_letter(s);
	if (start == ft_strlen(s))
		return (ft_strnew(0));
	end = find_last_letter(s);
	out = ft_strnew(end - start);
	out = ft_strsub(s, start, end - start);
	return (out);
}
