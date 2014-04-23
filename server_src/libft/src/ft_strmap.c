/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:02:32 by amaurer           #+#    #+#             */
/*   Updated: 2013/11/25 15:45:52 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*out;
	int		i;
	int		l;

	if (!s || !f)
		return (NULL);
	l = ft_strlen(s);
	out = ft_strnew(l);
	if (!out)
		return (NULL);
	i = 0;
	while (i < l)
	{
		out[i] = f(s[i]);
		i++;
	}
	return (out);
}
