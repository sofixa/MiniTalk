/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/07 19:55:01 by amaurer           #+#    #+#             */
/*   Updated: 2014/02/07 19:56:00 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

void	error_print(char *error)
{
	ft_putstr("ERROR: ");
	ft_putendl(error);
}

void	die(char *error)
{
	error_print(error);
	exit(EXIT_FAILURE);
}
