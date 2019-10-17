/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgrandne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 11:48:07 by jgrandne          #+#    #+#             */
/*   Updated: 2019/10/11 13:29:47 by jgrandne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*strjoin;
	int			size;
	int			size2;

	if (!s1 || !s2)
		return (NULL);
	size = 0;
	size2 = 0;
	while (s1[size])
		size++;
	while (s2[size2])
		size2++;
	if (!(strjoin = malloc(sizeof(char) * (size + size2 + 1))))
		return (NULL);
	size = -1;
	size2 = 0;
	while (s1[++size])
		strjoin[size] = s1[size];
	while (s2[size2])
	{
		strjoin[size + size2] = s2[size2];
		size2++;
	}
	strjoin[size + size2] = '\0';
	return (strjoin);
}
