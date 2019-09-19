/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvincent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 21:52:05 by tvincent          #+#    #+#             */
/*   Updated: 2019/09/15 17:42:54 by tvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size;

	if (s1 && s2)
		size = (size_t)(ft_strlen((char*)s1) + ft_strlen((char*)s2));
	else if (s1)
		size = (size_t)(ft_strlen((char*)s1));
	else if (s2)
		size = (size_t)(ft_strlen((char*)s2));
	else
		return (NULL);
	if (size > size + 1)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(str) * size + 1)))
		return (NULL);
	if (s1)
		str = ft_strcpy(str, (char*)s1);
	else
		str = ft_strcpy(str, (char*)s2);
	if (s1 && s2)
		str = ft_strcat(str, (char*)s2);
	return (str);
}
