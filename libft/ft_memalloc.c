/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvincent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 20:49:01 by tvincent          #+#    #+#             */
/*   Updated: 2019/09/15 17:48:40 by tvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*ptr;

	ptr = NULL;
	if (size && size < size + 1)
	{
		if (!(ptr = (unsigned char *)malloc(size)))
			return (NULL);
		while (size)
		{
			size--;
			ptr[size] = 0;
		}
	}
	return ((void *)ptr);
}
