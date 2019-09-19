/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvincent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 17:47:22 by tvincent          #+#    #+#             */
/*   Updated: 2019/09/15 17:54:31 by tvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int k;

	i = 0;
	k = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[k] = src[i];
		i++;
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
