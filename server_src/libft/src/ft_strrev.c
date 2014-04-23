/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:44:37 by amaurer           #+#    #+#             */
/*   Updated: 2013/11/19 15:48:06 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	char	c;
	int		i;
	int		length;

	length = ft_strlen(s);
	i = 0;
	while (i < length / 2)
	{
		c = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = c;
		i++;
	}
	return (s);
}
