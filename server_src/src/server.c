/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/07 19:58:33 by amaurer           #+#    #+#             */
/*   Updated: 2014/02/07 21:46:18 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"
#include <stdlib.h>
#include "error.h"

t_server	*server_get()
{
	static t_server	*server;

	if (!server)
	{
		if (!(server = (t_server*) malloc(sizeof(t_server))))
			die("Could not allocate memory.");
		server->client = 0;
	}
	return (server);
}
