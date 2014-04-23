/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/07 19:42:58 by amaurer           #+#    #+#             */
/*   Updated: 2014/02/07 21:49:14 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
# define SERVER_H

typedef struct		s_client
{
	int				pid;
	char			c;
	char			*message;
	unsigned int	bit_count;
	struct s_client	*next;
}					t_client;

typedef struct		s_server
{
	t_client		*client;
}					t_server;

t_server	*server_get(void);

#endif
