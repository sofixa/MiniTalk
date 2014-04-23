/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:14:11 by atodorov          #+#    #+#             */
/*   Updated: 2013/11/26 17:42:44 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char		*str;
	size_t		length;
	size_t		i;

	if (s == NULL || f == NULL)
	{
		return (NULL);
	}
	length = ft_strlen(s);
	str = ft_strnew(length + 1);
	i = 0;
	while (i < length)
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
