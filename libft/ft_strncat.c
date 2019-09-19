/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvincent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 17:55:45 by tvincent          #+#    #+#             */
/*   Updated: 2019/09/15 17:58:25 by tvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	unsigned int	i;
	int				k;

	i = 0;
	k = ft_strlen(dest);
	while (src[i] != '\0' && i < n)
	{
		dest[k] = src[i];
		i++;
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
