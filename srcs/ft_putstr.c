

#include "../header/bsq.h"

void	ft_putstr(char *str)
{
	int	i;

	if (str)
	{
		i = 0;
		while (*(str + i))
			i++;
		write(1, str, i);
	}
}
