/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:07:15 by mfiguera          #+#    #+#             */
/*   Updated: 2017/11/13 18:07:21 by mfiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	char	*ret;
	int		i;

	if (!s)
		return (NULL);
	start = 0;
	i = ft_strlen(s);
	end = i - 1;
	while (s[start] && (s[start] == ' ' || s[start] == 9 || s[start] == '\n'))
		start++;
	if (start == i)
		return (ft_strdup(""));
	while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
		end--;
	ret = (char *)malloc(sizeof(*ret) * (end - start) + 2);
	if (!ret)
		return (NULL);
	i = 0;
	while (start <= end)
		ret[i++] = s[start++];
	ret[i] = 0;
	return (ret);
}
