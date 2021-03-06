/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 14:56:22 by evgenkarlson      #+#    #+#             */
/*   Updated: 2021/08/08 21:25:59 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
