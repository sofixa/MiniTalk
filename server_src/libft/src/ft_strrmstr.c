/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrmstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/23 04:50:10 by amaurer           #+#    #+#             */
/*   Updated: 2013/12/28 14:24:18 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrmstr(const char *str, char *rm)
{
	char	*occ;
	int		i;
	char	*tmp;
	char	*out;

	tmp = (char*) str;
	i = 0;
	while ((occ = ft_strstr(tmp, rm)))
	{
		i++;
		tmp = occ + ft_strlen(rm);
	}
	out = ft_strnew(sizeof(char) * (ft_strlen(str) - i * ft_strlen(rm)));
	tmp = (char*) str;
	while ((occ = ft_strstr(tmp, rm)))
	{
		out = ft_strcat(out, ft_strsub(tmp, 0, occ - tmp));
		ft_putendl(out);
		tmp = occ + ft_strlen(rm);
	}
	ft_strcat(out, tmp);
	return (out);
}
