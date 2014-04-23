/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_left.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 21:45:49 by amaurer           #+#    #+#             */
/*   Updated: 2013/12/16 15:44:34 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_left(int n, size_t len, char c)
{
	int		gap;

	ft_putnbr(n);
	gap = len - ft_nbrlen(n) - 1;
	while (gap-- >= 0)
		ft_putchar(c);
}
