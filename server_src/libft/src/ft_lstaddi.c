/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 17:17:19 by amaurer           #+#    #+#             */
/*   Updated: 2013/11/28 16:45:49 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddi(t_list **lst, t_list *new, unsigned int i)
{
	t_list	*next;
	t_list	*prev;

	if (!new)
		return ;
	if (!i)
		ft_lstadd(lst, new);
	else if (*lst && i == ft_lstlen(*lst))
	{
		prev = ft_lstlast(*lst);
		prev->next = new;
	}
	else if (*lst)
	{
		next = ft_lsti(*lst, i);
		if (!next)
			return ;
		ft_lstadd(&next, new);
		prev = ft_lsti(*lst, i - 1);
		prev->next = next;
		new->next = ft_lsti(*lst, i + 1);
	}
}
