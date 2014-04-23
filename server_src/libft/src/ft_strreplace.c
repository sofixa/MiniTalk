/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 12:53:24 by amaurer           #+#    #+#             */
/*   Updated: 2014/01/15 12:15:37 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_strreplace_count(const char *str, const char *ptrn)
{
	int		count;

	count = 0;
	while ((str = ft_strstr(str, ptrn)) && (str += ft_strlen(ptrn)))
		count++;
	return (count);
}

char		*ft_strreplace(const char *str, const char *ptrn, const char *rplce)
{
	char	*pos;
	int		count;
	char	*out;
	char	*pos1;
	int		len[3];

	if (!str || !ptrn || !rplce)
		return (NULL);
	if (!(count = ft_strreplace_count(str, ptrn)))
		return ((char*) str);
	len[0] = ft_strlen(str);
	len[1] = ft_strlen(ptrn);
	len[2] = ft_strlen(rplce);
	out = ft_strnew(len[0] - len[1] * count + len[2] * count);
	if ((pos = (char*) str) && !out)
		return (NULL);
	while ((pos1 = ft_strstr(pos, ptrn)))
	{
		ft_strncat(out, pos, pos1 - pos);
		ft_strncat(out, rplce, len[2]);
		pos = pos1 + len[1];
	}
	if (pos != (str + len[0]))
		ft_strncat(out, pos, (str - pos));
	return (out);
}
