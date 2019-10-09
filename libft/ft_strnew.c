/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvincent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 20:53:24 by tvincent          #+#    #+#             */
/*   Updated: 2019/10/09 22:43:11 by tvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (size > size + 1)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
	{
//		free(str);
		return (NULL);
	}
	str[size] = '\0';
	while (size)
	{
		size--;
		str[size] = '\0';
	}
	return (str);
}
