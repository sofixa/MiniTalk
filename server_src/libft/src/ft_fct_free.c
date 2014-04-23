/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fct_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 14:14:36 by amaurer           #+#    #+#             */
/*   Updated: 2013/12/29 11:41:25 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_fct_free(char *str, char *(*f)(const char*))
{
	char	*tmp;

	tmp = str;
	str = f(str);
	free(tmp);
	return (str);
}
