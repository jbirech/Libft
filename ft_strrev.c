/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobirech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 21:08:29 by jobirech          #+#    #+#             */
/*   Updated: 2018/05/01 11:06:29 by jobirech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strrev(char *c)
{
	char	*i;
	char	j;

	i = c + ft_strlen(c) - 1;
	while (c < i)
	{
		j = *c;
		*c++ = *i;
		*i-- = j;
	}
}