/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 15:24:28 by amaurer           #+#    #+#             */
/*   Updated: 2013/12/22 15:29:57 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*l;

	if (!f || !lst)
		return (NULL);
	l = lst;
	if (lst->next)
		lst = ft_lstmap(lst->next, f);
	else
		lst = NULL;
	ft_lstadd(&lst, f(ft_lstnew(l->content, l->content_size)));
	return (lst);
}
