/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 13:10:24 by mfiguera          #+#    #+#             */
/*   Updated: 2017/11/15 13:10:26 by mfiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int s;

	i = 0;
	while (s1[i])
		i++;
	s = i;
	while (s2[i - s])
	{
		s1[i] = s2[i - s];
		i++;
	}
	s1[i] = 0;
	return (s1);
}
