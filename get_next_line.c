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

int				get_next_line(const int fd, char **line)
{
	char	b[BUF_SIZE + 1];
	static t_list	*list;
	t_list			*cur;

	if ((fd < 0 || read(fd, buf, 0) < 0))
	   return (1);
	cur = ft_line(&list, fd);

}

int	main(int ar, char **av)
{
	int		fd;
	char	*line;

	fd = open(av[1], O_RDNLY);
	get_next_line(fd, &line);
}
