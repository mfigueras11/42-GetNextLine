/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 21:13:12 by mfiguera          #+#    #+#             */
/*   Updated: 2017/11/14 21:13:16 by mfiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	h;
	int	n;
	int s;

	h = 0;
	while (haystack[h] && h < (int)len)
	{
		n = 0;
		s = h;
		while (needle[n] && h < (int)len && haystack[h] == needle[n])
		{
			n++;
			h++;
		}
		if (!needle[n])
			return ((char*)&haystack[s]);
		else
			h = s;
		h++;
	}
	return (NULL);
}
