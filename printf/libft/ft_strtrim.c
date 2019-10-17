/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgrandne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:21:22 by jgrandne          #+#    #+#             */
/*   Updated: 2019/10/16 11:44:20 by jgrandne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int		is_char(const char *is_char, char c)
{
	int		i;

	i = 0;
	while (is_char[i])
	{
		if (is_char[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (is_char(set, s1[i]) == 1 && s1[i])
		i++;
	start = i;
	while (s1[i])
		i++;
	if (i-- != start)
		while (is_char(set, s1[i]) == 1)
			i--;
	end = i + 1;
	if (!(res = malloc(sizeof(char) * (end - start + 1))))
		return (NULL);
	i = 0;
	while (end > start)
		res[i++] = s1[start++];
	res[i] = '\0';
	return (res);
}
