/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:47:12 by amaurer           #+#    #+#             */
/*   Updated: 2014/01/15 12:14:20 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_length(int n)
{
	int		l;

	if (!n)
		return (1);
	l = (n < 0) ? 1 : 0;
	while (n)
	{
		l++;
		n /= 10;
	}
	return (l);
}

char		*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		negative;
	int		overflow;

	overflow = (n == -2147483648) ? 1 : 0;
	n = (overflow) ? n + 1 : n;
	s = ft_strnew(get_length(n) + 1);
	if (!s)
		return (NULL);
	if (!n)
		return (ft_strcpy(s, "0"));
	negative = (n < 0) ? 1 : 0;
	if (negative)
		n *= - 1;
	i = 0;
	while (n)
	{
		s[i] = (overflow && !i) ? n % 10 + 49 : n % 10 + 48;
		n /= 10;
		i++;
	}
	s[i] = (negative) ? '-' : '\0';
	return (ft_strrev(s));
}
