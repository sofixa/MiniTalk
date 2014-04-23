/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 14:15:35 by atodorov          #+#    #+#             */
/*   Updated: 2014/02/08 16:32:48 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include "libft/libft.h"
#include "client.h"

int		*ft_to_binary(char msg)
{
	int 	i;
	int		p;
	int		*buf;

	i = 8;
	p = 0;
	buf = malloc(8);
	while (i-- > 0)
	{
		buf[p] = (msg >> (i - 0)) % 2;
		p++;
	}
	return (buf);
}

void	ft_send(pid_t spid, char msg)
{
	int			i;
	int			*buf;

	i = 0;
	buf = ft_to_binary(msg);
	while (i < 8)
	{
		ft_putchar(msg);
		usleep(1000);
		if (buf[i] == 0)
		{
			ft_putnbr(0);
			if (kill(spid, SIGUSR1) == -1)
			{
				ft_putstr_fd("Error.\n", 2);
				exit(0);
			}
		}
		else
		{
			ft_putnbr(1);
			if (kill(spid, SIGUSR2) == -1)
			{
				ft_putstr_fd("Error.\n", 2);
				exit(0);
			}
		}
		ft_putchar('\n');
		i++;
	}
}

void	client(char **argv)
{
	int		i;
	pid_t	spid;
	char	*msg;

	spid = ft_atoi(argv[1]);
	msg = argv[2];
	i = 0;
	while (msg[i] != '\0')
	{
		ft_send(spid, msg[i]);
		i++;
	}
	ft_send(spid, msg[i]);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		client(argv);
	else
		ft_putstr_fd("Usage ./client server_pid message", 2);
	return (0);
}

