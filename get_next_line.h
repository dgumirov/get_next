#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"
# include <fcntl.h>
# define BUFF_SIZE 8

int		get_next_line(int const fd, char **line);

#endif
