/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:06:49 by mfiguera          #+#    #+#             */
/*   Updated: 2017/11/09 18:06:50 by mfiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memset1(void *b, size_t len)
{
	int				i;
	unsigned char	*a;

	i = 0;
	a = b;
	while (i < (int)len)
		a[i++] = 0;
	return (b);
}

void		*ft_memalloc(size_t size)
{
	void			*ret;

	ret = malloc(size);
	if (!ret)
		return (ret);
	return (ft_memset1(ret, size));
}
