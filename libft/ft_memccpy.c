/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 16:46:47 by mfiguera          #+#    #+#             */
/*   Updated: 2017/11/15 16:46:49 by mfiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*s1;

	i = 0;
	s = (unsigned char*)src;
	s1 = (unsigned char*)dst;
	while (i < n)
	{
		s1[i] = s[i];
		if (s[i] == (unsigned char)c)
			return ((void*)&s1[i + 1]);
		i++;
	}
	return (NULL);
}
