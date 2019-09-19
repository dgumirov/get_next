/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvincent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 10:11:23 by tvincent          #+#    #+#             */
/*   Updated: 2019/09/18 19:19:26 by tvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		k;
	int		n;
	char	c;

	n = 0;
	k = ft_strlen(str);
	while ((k - 1) > n)
	{
		c = str[n];
		str[n] = str[k];
		str[k] = c;
		n++;
		k--;
	}
	return (str);
}
