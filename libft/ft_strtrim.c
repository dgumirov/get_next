/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvincent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 14:54:33 by tvincent          #+#    #+#             */
/*   Updated: 2019/09/10 21:30:03 by tvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(char *s)
{
	size_t	i;
	size_t	spaces;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	if (!(s))
		return (0);
	while (ft_isspace(s[i]))
	{
		i++;
	}
	spaces = i;
	if (s[i] != '\0')
	{
		i = len - 1;
		while (ft_isspace(s[i]))
		{
			i--;
			spaces++;
		}
	}
	return (len - spaces);
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	if (!(s))
		return (NULL);
	len = ft_len((char *)s);
	if (!(str = (char *)malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	while (ft_isspace(s[i]))
		i++;
	while (j < len)
	{
		str[j] = s[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}
