/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:17:12 by atodorov          #+#    #+#             */
/*   Updated: 2013/12/31 18:44:56 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;

	p = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	ft_strcpy(p, s1);
	ft_strcat(p, s2);
	return (p);
}
