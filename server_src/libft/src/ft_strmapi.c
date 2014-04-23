/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:46:25 by amaurer           #+#    #+#             */
/*   Updated: 2013/11/25 15:46:02 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		out[i] = f(i, s[i]);
		i++;
	}
	return (out);
}
