/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:32:45 by mfiguera          #+#    #+#             */
/*   Updated: 2017/12/08 12:40:13 by mfiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*sret;

	if (!s1)
		return (NULL);
	i = 0;
	while (s1[i])
		i++;
	sret = (char *)malloc(sizeof(*s1) * (i + 1));
	if (!sret)
		return (sret);
	i = 0;
	while (s1[i])
	{
		sret[i] = s1[i];
		i++;
	}
	sret[i] = '\0';
	return (sret);
}
