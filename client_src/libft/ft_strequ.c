/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 16:40:55 by atodorov          #+#    #+#             */
/*   Updated: 2013/11/27 15:47:01 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t		i;

	i = 0;
	if (s1 != NULL && s2 != NULL)
	{
	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
		i++;
	if (s1[i] != s2[i])
	{
		return (0);
	}
	else
	{
		return (1);
	}
	}
	else
	{
		return (0);
	}
}

