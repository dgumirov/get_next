/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvincent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 12:53:20 by tvincent          #+#    #+#             */
/*   Updated: 2019/10/09 23:06:51 by tvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list	*ft_line(t_list **list, int fd)
{
	t_list	*tmp;

	tmp = *list;
	while (tmp)
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	if (!(tmp = ft_lstnew("\0", fd)))
		return(NULL);
	ft_lstadd(list, tmp);
	tmp = *list;
	return (tmp);
}

char			*ft_strjoinch(char const *s1, char const s2)
{
	char	*str;
	size_t	size;

	if (s1)
		size = (size_t)(ft_strlen((char*)s1));
	else
		return (NULL);
	if (size > size + 1)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(str) * (size + 2))))
		return (NULL);
	if (s1)
		str = ft_strcpy(str, (char*)s1);
	str[size] = s2;
	return (str);
}

int				ft_copier(char **dst, char *src, char c)
{
	int		i;
	int		cnt;
	int		pos;

	i = -1;
	cnt = 0;
	while (src[++i])
	{
		if (src[i] == c)
			break ;
	}
	pos = i;
	if (!(*dst = ft_strnew(i)))
		return (0);
	while (src[cnt] && cnt < i)
	{
		if (!(*dst = ft_strjoinch(*dst, src[cnt])))
			return (0);
		cnt++;
	}
//	free(*dst);
	return (pos);
}

int				get_next_line(int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	static t_list	*list;
	t_list			*cur;
	int				rd;
	int				pos;

	if ((fd < 0 || read(fd, buf, 0) < 0))
		return (-1);
	cur = ft_line(&list, fd);
	if (!(*line = ft_strnew(1)))
		return (-1);
	while ((rd = read(fd, buf, BUFF_SIZE)))
	{
		buf[rd] = '\0';
		if (!(cur->content = ft_strjoin(cur->content, buf)))
		{
//			free (cur->content);
			return (-1);
		}
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (rd < BUFF_SIZE && !ft_strlen(cur->content))
		return (0);
	pos = ft_copier(line, cur->content, '\n');
	if (pos < (int)ft_strlen(cur->content))
		cur->content += (pos + 1);
	else
		ft_strclr(cur->content);
	return (1);
}
/*
int		main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc == 1)
		fd = 0;
	else if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else
		return (2);
	while (get_next_line(fd, &line) == 1)
	{
//		printf("str = %s\n", line);
		ft_putendl(line);
		free(line);
	}
	if (argc == 2)
		close(fd);
}*/
