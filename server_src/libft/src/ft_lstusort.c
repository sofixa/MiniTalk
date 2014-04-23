/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstusort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 12:58:15 by amaurer           #+#    #+#             */
/*   Updated: 2014/01/15 12:14:34 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lstusort_sort(t_list **lst, int (*f)(t_list *lst1, t_list *lst2))
{
	t_list	*current;
	t_list	*prev;
	t_list	*next;
	int		changed;

	changed = 0;
	current = *lst;
	prev = NULL;
	next = current->next;
	while (next)
	{
		if (f(current, next) > 0)
		{
			if (prev && ++changed)
				prev->next = next;
			current->next = next->next;
			next->next = current;
			if (!prev)
				*lst = next;
		}
		prev = current;
		current = next;
		next = next->next;
	}
	return (changed);
}

void		ft_lstusort(t_list **lst, int (*f)(t_list *lst1, t_list *lst2))
{
	if (ft_lstlen(*lst) < 2)
		return ;
	while (ft_lstusort_sort(lst, f))
		lst = (t_list**) lst;
}
