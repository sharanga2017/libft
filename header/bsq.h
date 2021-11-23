

#ifndef BSQ_H
# define BSQ_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <libgen.h>




void	ft_stdin(void);
void	ft_putchar(char c);
void	ft_putstr(char *str);


void	bsq(char *file_map);

#endif
