#include "libft.h"

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




int main()
{
    char *str = {"64545464iyiyiyuyi"};

    ft_putstr(str);
}