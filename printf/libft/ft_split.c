/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgrandne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 17:54:13 by jgrandne          #+#    #+#             */
/*   Updated: 2019/10/14 17:01:15 by jgrandne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		is_charset(char *charset, char c)
{
	if (charset[0] == c)
		return (1);
	return (0);
}

static char		*ft_len_words(const char *src, char *charset)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	while (src[i] && (!is_charset(charset, src[i])))
		i++;
	if (!(dest = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	j = 0;
	while (i > j)
	{
		dest[j] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

static int		count_words(const char *s, char *charset)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (is_charset(charset, s[i]))
		{
			count++;
			while (is_charset(charset, s[i]) && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**res;
	char	charset[1];

	charset[0] = c;
	if (!s || !(res = malloc(sizeof(char *) * (count_words(s, charset) + 2))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (is_charset(charset, s[i]))
			while (s[i] != '\0' && is_charset(charset, s[i]))
				i++;
		else
		{
			res[j++] = ft_len_words(s + i, charset);
			while (s[i] != '\0' && !is_charset(charset, s[i]))
				i++;
		}
	}
	res[j] = NULL;
	return (res);
}
