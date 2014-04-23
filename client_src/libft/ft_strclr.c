/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 13:44:16 by atodorov          #+#    #+#             */
/*   Updated: 2013/12/27 15:11:10 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int		index;
	int		size;

	index = 0;
	if (s != NULL)
	{
		size = ft_strlen(s);
		while (index < size)
		{
			s[index] = '\0';
			index++;
		}
	}
}
