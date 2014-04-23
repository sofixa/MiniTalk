/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 16:13:20 by atodorov          #+#    #+#             */
/*   Updated: 2013/12/27 15:14:03 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t		i;

	i = 0;
	if ((s1 != NULL && s2 != NULL) && s1[0] == s2[0])
	{
		while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0') && i < n)
			i++;
		if ((s1[i-1] == s2[i-1]) && (i == n ))
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
