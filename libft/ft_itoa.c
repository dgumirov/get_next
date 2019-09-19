/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvincent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 14:57:18 by tvincent          #+#    #+#             */
/*   Updated: 2019/09/15 17:39:00 by tvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		lengths(int n)
{
	size_t			len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	size_t			len;
	size_t			cur;
	unsigned int	nb;
	char			*str;

	len = lengths(n);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	cur = len;
	str[cur] = '\0';
	str[0] = '-';
	if (n < 0)
		nb = n * -1;
	else
		nb = n;
	while (cur && nb)
	{
		cur--;
		str[cur] = (nb % 10) + 48;
		nb = nb / 10;
	}
	if (n == 0)
		str[0] = '0';
	return (str);
}
