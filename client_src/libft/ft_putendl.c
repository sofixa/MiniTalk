/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 13:58:15 by atodorov          #+#    #+#             */
/*   Updated: 2014/01/14 16:14:29 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void		ft_putendl(char const *s)
{
	int		index;

	index = 0;
	while (s[index] != '\0')
	{
		ft_putchar(s[index]);
		index++;
	}
	ft_putchar('\n');
}
