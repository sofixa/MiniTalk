/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/07 19:59:47 by amaurer           #+#    #+#             */
/*   Updated: 2014/02/08 15:29:10 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"
#include "error.h"
#include <libft.h>
#include <stdlib.h>
#include "client.h"

void	client_add_bit(int pid, int bit)
{
	t_client	*client;

	client = client_get(pid);
	if (!client)
		client = client_add(pid);
	client->c |= bit;
	if (client->bit_count < 7)
	{
		client->c = client->c << 1;
		client->bit_count++;
		return ;
	}
	if (client->c == '\0')
		ft_putendl(client->message);
	client_add_char(client);
}

void		client_add_char(t_client *client)
{
	char	*tmp;
	size_t	len;

	len = ft_strlen(client->message);
	tmp = ft_strnew(len + 1);
	ft_strcpy(tmp, client->message);
	tmp[len] = client->c;
	client->c = 0;
	client->bit_count = 0;
	ft_strreassign(&(client->message), tmp);
}

t_client	*client_get(int pid)
{
	t_client	*client;

	client = server_get()->client;
	while (client)
	{
		if (client->pid == pid)
			return (client);
		client = client->next;
	}
	return (NULL);
}

t_client	*client_create(int pid)
{
	t_client	*client;

	if (!(client = (t_client*) malloc(sizeof(t_client))))
		die("Could not allocate memory.");
	client->pid = pid;
	client->c = 0;
	client->bit_count = 0;
	client->message = 0;
	client->next = 0;
	return (client);
}

t_client	*client_add(int pid)
{
	t_server	*server;
	t_client	*client;

	client = client_create(pid);
	server = server_get();
	client->next = server->client;
	server->client = client;
	return (client);
}
