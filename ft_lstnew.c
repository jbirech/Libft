/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobirech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 20:14:31 by jobirech          #+#    #+#             */
/*   Updated: 2018/04/23 20:14:36 by jobirech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new)
	{
		if (content == NULL)
		{
			new->content_size = 0;
			new->content = NULL;
		}
		else
		{
			new->content_size = content_size;
			if (!(new->content = ft_memalloc(new->content_size)))
				return (NULL);
			new->content = ft_memcpy(new->content, content, new->content_size);
		}
		new->next = NULL;
	}
	return (new);
}
