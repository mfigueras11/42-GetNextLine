/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:17:35 by mfiguera          #+#    #+#             */
/*   Updated: 2017/11/13 15:17:36 by mfiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *str, char c, int word, char **lc)
{
	int	i;
	int	word_count;
	int	letter_count;

	i = 0;
	word_count = 0;
	letter_count = 1;
	while (str[i])
	{
		if ((str[i] != c && i == 0) || (str[i] != c && str[i - 1] == c))
		{
			word_count++;
			if (word && word == word_count && lc)
				*lc = (char *)&str[i];
			while (word && word == word_count && str[i] && str[i] != c)
			{
				letter_count++;
				i++;
			}
			if (word && word == word_count)
				return (letter_count);
		}
		i++;
	}
	return (word_count);
}

static char	*ft_makeword(const char *s, char c, int word)
{
	char	*str;
	char	as;
	int		len;

	as = 49;
	str = &as;
	len = ft_wordcount(s, c, word, &str);
	return (ft_strsub(str, 0, len - 1));
}

char		**ft_strsplit(const char *s, char c)
{
	int		nwords;
	int		w;
	char	**ret;

	if (!s)
		return (NULL);
	nwords = ft_wordcount(s, c, 0, 0);
	w = 0;
	if (!(ret = (char**)malloc(sizeof(char*) * (nwords + 1))))
		return (NULL);
	while (w < nwords)
	{
		ret[w] = ft_makeword(s, c, w + 1);
		w++;
	}
	ret[w] = 0;
	return (ret);
}
