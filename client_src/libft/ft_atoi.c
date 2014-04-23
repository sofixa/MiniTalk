/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 13:51:15 by atodorov          #+#    #+#             */
/*   Updated: 2013/12/15 16:41:08 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int		i;
	int		sign;

	i = 0;
	sign = 1;
	if (str)
	{
		while (*str == ' ' || *str == '\n' || *str == '\v' || *str == '\t'
				|| *str == '\r' || *str == '\f')
			str++;
		if (*str == '-')
		{
			sign = -1;
			str++;
		}
		else if (*str == '+')
			str++;
		while (*str && *str >= '0' && *str <= '9')
		{
			i = (i * 10) + (*str - '0');
			str++;
		}
	}
	return (i = (i * sign));
}
