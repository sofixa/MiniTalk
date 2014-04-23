/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/07 20:00:10 by amaurer           #+#    #+#             */
/*   Updated: 2014/02/07 22:13:55 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_H
# define CLIENT_H

# include "server.h"

void		client_add_bit(int pid, int bit);
t_client	*client_create(int pid);
t_client	*client_get(int pid);
t_client	*client_add(int pid);
void		client_add_char(t_client *client);

#endif
