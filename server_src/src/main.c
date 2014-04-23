/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/07 19:33:13 by amaurer           #+#    #+#             */
/*   Updated: 2014/02/07 23:07:58 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include <libft.h>
#include "client.h"
#include <stdlib.h>

void	handler(int code)
{
	client_add_bit(1, (code == SIGUSR2));
}

int		main(void)
{
	int x = 37197;
	int size = 32;
	while (size > 0)
	{
		ft_putnbr((x >> (size - 1)) % 2);
		size--;
	}
	ft_putendl("");
	ft_putstr("PID: ");
	ft_putnbrln(getpid());
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	while (1);
	return (0);
}
