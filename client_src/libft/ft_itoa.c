/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 16:52:07 by atodorov          #+#    #+#             */
/*   Updated: 2014/02/08 14:44:07 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	itoa_convert(char *dst, int n, int cpy, int len)
{
	if (n < 0)
	{
		dst[++len] = '\0';
		dst[0] = '-';
		++n;
		n *= -1;
		dst[1] = (cpy * -1) + 48;
	}
	else
	{
		dst[len] = '\0';
		dst[0] = cpy + 48;
	}
	while (len > 1)
	{
		if ((n % 10) < 9)
		{
			dst[len - 1] = (n % 10) + 48;
		}
		n /= 10;
		--len;
	}
}

char		*ft_itoa(int n)
{
	char	*dst;
	int		len;
	int		cpy;
	int		i;

	i = 0;
	cpy = n;
	len = 1;
	while ((cpy / 10) >= 1 || (cpy / 10) <= -1)
	{
		++len;
		cpy /= 10;
	}
	if ((dst = (char *) ft_memalloc((len + 1) * sizeof(char))))
		itoa_convert(dst, n, cpy, len);
	else
		return (NULL);
	while (dst[i] != '\0' && dst[0] == '-')
	{
		if (dst[i + 1] == '\0')
			dst[i] = dst[i] + 1;
		++i;
	}
	return (dst);
}
