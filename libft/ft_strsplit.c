/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvincent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 22:00:09 by tvincent          #+#    #+#             */
/*   Updated: 2019/09/15 17:05:05 by tvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			**str;

	i = 0;
	k = 0;
	if (!s || !(str = (char **)malloc(sizeof(char *) *
					(ft_word_cnt(s, c) + 1))))
		return (NULL);
	while (i < ft_word_cnt(s, c))
	{
		if (!(str[i] = (char *)malloc(sizeof(char) * (ft_wlen(&s[k], c) + 1))))
			return (ft_freed(str));
		j = 0;
		while (s[k] == c)
			k++;
		while (s[k] != c && s[k])
			str[i][j++] = s[k++];
		str[i][j] = '\0';
		i++;
	}
	str[i] = NULL;
	return (str);
}
