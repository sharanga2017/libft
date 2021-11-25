// #include "libft.h"

#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (*(str + i))
		i++;
	write(1, str, i);
}




int	ft_atoi(char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while ((*str == ' ') || (*str == '\t') || (*str == '\n')
		|| (*str == '\v') || (*str == '\f') || (*str == '\r'))
		str++;
	if (*str == '-')
		sign = -1;
		str++;
	while ((*str == '-') || (*str == '+'))
    {
        if( *str == '-')
        {
            sign = sign * (-1);
        }
    
		str++;
    }
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + ((int)*str - '0');
		str++;
	}
	return (num * sign);
}


#include <stdio.h>

int main()
{
    char *str = {"---++++---++-+++64545464iyiyiyuyi"};

    printf("%d \n",ft_atoi(str));
}