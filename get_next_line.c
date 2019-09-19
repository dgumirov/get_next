/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvincent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 12:53:20 by tvincent          #+#    #+#             */
/*   Updated: 2019/09/15 15:21:55 by tvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static t_list	ft_line(t_list **list, int fd)
{
	t_list	*tmp;

	tmp = *list;
	while (tmp)
	{
		if ((int)tmp->content_size == fd)
			return(tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("\0", fd);
	ft_lst_add(list, tmp);
	tmp = *list;
	return (tmp);
}

int			ft_copier(char **dst, char *src, char c)
{
	int		i;
	int		cnt;
	int		pos;

	i = 0;
	count = 0;
	while (src[i])
	{
		if (src[i] == c)
			break ;
		i++;
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
	return (pos);
}

int				get_next_line(int fd, char **line)
{
	char		buf[BUF_SIZE + 1];
	static 		t_list	*list;
	t_list		*cur;
	int		rd;
	int		pos;

	if ((fd < 0 || read(fd, buf, 0) < 0))
	   return (1);
	cur = ft_line(&list, fd);
	if (!(*line = ft_strnew(1)))
		return (-1);
	while ((rd = read(fd, buf, BUFF_SIZE)))
	{
		buf[rd] = '\0';
		if (!(curr->content = ft_strjoin(curr->content, buf)))
			return (-1);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (rd < BUFF_SIZE && !ft_strlen(curr->content))
		return (0);
	pos = ft_copier(line, curr->content, '\n');
	if (pos < (int)ft_strlen(curr->content))
		curr->content += (i + 1);
	else
		ft_strclr(curr->content);
	return (1);

}

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
		ft_putendl(line);
		free(line);
	}
	if (argc == 2)
		close(fd);
}
