
#include "libft.h"

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (*(str + i))
		i++;
	write(1, str, i);
}