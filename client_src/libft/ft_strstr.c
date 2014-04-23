/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:18:03 by atodorov          #+#    #+#             */
/*   Updated: 2013/12/15 16:25:43 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s2[j])
	{
		if (!s1[i])
			return (NULL);
		if (s1[i] == s2[j])
			j++;
		else
		{
			j = 0;
			while (s1[i] == s2[j])
				j++;
		}
		i++;
	}
	return ((char *)(s1 + i - j));
}
