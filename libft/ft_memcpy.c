/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 15:21:53 by mfiguera          #+#    #+#             */
/*   Updated: 2017/11/15 15:21:55 by mfiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	void		*ret;
	char		*s1;
	const char	*s2;

	i = 0;
	ret = dst;
	s1 = dst;
	s2 = (char*)src;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (ret);
}
