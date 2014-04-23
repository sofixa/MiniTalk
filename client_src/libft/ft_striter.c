/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:06:32 by atodorov          #+#    #+#             */
/*   Updated: 2013/11/27 15:37:32 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int		index;

	index = 0;
	if (s != NULL && f != NULL)
	{
		while (s[index] != '\0')
		{
			f(&s[index]);
			index++;
		}
	}
}
