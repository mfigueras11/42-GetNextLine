/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 13:21:23 by mfiguera          #+#    #+#             */
/*   Updated: 2017/11/14 13:21:25 by mfiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		sign;
	int		i;
	long	nb;
	long	temp;

	i = 0;
	sign = 1;
	while (str[i] == 32 || str[i] == 9 || str[i] == 10 || str[i] == 13 ||
		str[i] == 12 || str[i] == 11)
		i++;
	if (str[i] == '-' || str[i] == '+')
		sign = 44 - str[i++];
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		temp = nb;
		nb = nb * 10 + (str[i++] - '0') * sign;
		if (temp > nb && sign == 1)
			return (-1);
		if (temp < nb && sign == -1)
			return (0);
	}
	return (nb);
}
