/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 17:31:35 by mfiguera          #+#    #+#             */
/*   Updated: 2017/11/15 17:31:36 by mfiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*b;
	const char	*c;

	b = (char*)dest;
	c = (const char*)src;
	if (c > b)
		ft_memcpy(b, c, n);
	else
	{
		while (n)
		{
			n--;
			b[n] = c[n];
		}
	}
	return (dest);
}
