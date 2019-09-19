/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvincent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 20:29:30 by tvincent          #+#    #+#             */
/*   Updated: 2019/09/15 17:35:17 by tvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_space(const char *nptr)
{
	const char	*s;

	while (*nptr && ft_isspace(*nptr))
		nptr++;
	s = nptr;
	return (s);
}

static	int			ft_neg(const char *str)
{
	long long	res;

	res = 0;
	while (*str && ft_isdigit((int)*str))
	{
		res = res * 10;
		if (res < 0 || ((res == ((LONG_M / 10) * 10) && *str >= '8')))
			return (0);
		res = res + (*str - '0');
		str++;
	}
	return (res * -1);
}

static	int			ft_pos(const char *str)
{
	unsigned long long	res;

	res = 0;
	while (*str && ft_isdigit((int)*str))
	{
		if ((res >= ((LONG_M / 10) * 10) && *str > '7'))
			return (-1);
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res);
}

int					ft_atoi(const char *nptr)
{
	const char	*str;

	str = ft_space(nptr);
	if (*str == '-')
	{
		str++;
		return (ft_neg(str));
	}
	if (*str == '+')
		str++;
	return (ft_pos(str));
}
