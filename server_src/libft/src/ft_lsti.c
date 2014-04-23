/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsti.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 16:55:17 by amaurer           #+#    #+#             */
/*   Updated: 2014/01/06 17:31:49 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lsti(t_list *lst, unsigned int i)
{
	while (lst)
	{
		if (!i--)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
