/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvincent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 12:54:53 by tvincent          #+#    #+#             */
/*   Updated: 2019/09/10 20:59:07 by tvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		k;

	k = ft_strlen(s);
	if (!(dest = (char*)(malloc(sizeof(char) * k + 1))))
		return (0);
	dest[k] = '\0';
	while (k > 0)
	{
		k--;
		dest[k] = s[k];
	}
	return (dest);
}
