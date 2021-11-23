#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;					
	char	*cpy;				
    

	i = 0;		

	if (!(src) || !(cpy = (char *)malloc(sizeof(char) * ft_strlen(src) + 1)))	
		return ((void *)0);
	while (src[i])		
	{
		cpy[i] = src[i];		
		i++;					
	}
	cpy[i] = '\0';
	return (cpy);	
}