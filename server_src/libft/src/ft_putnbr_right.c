/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_right.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 21:45:49 by amaurer           #+#    #+#             */
/*   Updated: 2013/12/16 15:45:01 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_right(int n, size_t len, char c)
{
	int		gap;

	gap = len - ft_nbrlen(n) - 1;
	while (gap-- >= 0)
		ft_putchar(c);
	ft_putnbr(n);
}
