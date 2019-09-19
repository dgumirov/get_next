/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvincent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 15:09:14 by tvincent          #+#    #+#             */
/*   Updated: 2019/09/15 17:59:36 by tvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	if (!(*needle))
		return ((char*)haystack);
	i = 0;
	j = 0;
	while (haystack[i])
	{
		while ((haystack[i + j]) == needle[j] && needle[j] != '\0')
			j++;
		if (needle[j] == '\0')
			return ((char*)(&haystack[i]));
		j = 0;
		i++;
	}
	return (NULL);
}
