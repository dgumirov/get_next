/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvincent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:23:56 by tvincent          #+#    #+#             */
/*   Updated: 2019/09/10 22:49:56 by tvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*tmp;
	t_list	*list;

	list = *alst;
	while (list)
	{
		tmp = list->next;
		del(list, list->content_size);
		list = tmp;
	}
	if (tmp)
		free(tmp);
	*alst = NULL;
}
