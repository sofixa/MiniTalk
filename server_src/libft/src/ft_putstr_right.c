/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_right.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 21:45:49 by amaurer           #+#    #+#             */
/*   Updated: 2013/12/16 15:43:54 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_right(char *str, size_t len, char c)
{
	int		gap;

	gap = len - ft_strlen(str);
	while (gap-- > 0)
		ft_putchar(c);
	ft_putstr(str);
}
