/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:15:56 by atodorov          #+#    #+#             */
/*   Updated: 2013/11/26 18:08:37 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int i, char))
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
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
