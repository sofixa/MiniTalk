/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_duplicates.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/23 04:35:42 by amaurer           #+#    #+#             */
/*   Updated: 2013/12/29 12:11:36 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_remove_duplicates(const char *str, char c)
{
	int		j;
	char	*out;
	int		i;

	if ((!str || !*str))
		return (NULL);
	i = -1;
	j = 0;
	while (str[++i])
		if (str[i] == c && str[i + 1] == c)
		{
			j++;
			i++;
		}
	out = ft_strnew(ft_strlen(str) - j);
	i = -1;
	j = 0;
	while (str[++i])
	{
		if (str[i] == c && str[i + 1] == c)
			i++;
		out[j] = str[i];
		j++;
	}
	return (out);
}
