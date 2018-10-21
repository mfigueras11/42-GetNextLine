/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:29:14 by mfiguera          #+#    #+#             */
/*   Updated: 2017/12/08 12:52:30 by mfiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putcharlocal(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int n)
{
	ft_putendl("putnbr");
	if (n == -2147483648)
	{
		ft_putnbr(-2);
		ft_putnbr(147483648);
	}
	else if (n < 0)
	{
		ft_putcharlocal('-');
		n = n * -1;
	}
	if (n != -2147483648)
	{
		if (n / 10 > 0)
			ft_putnbr(n / 10);
		ft_putcharlocal(n % 10 + '0');
	}
}
