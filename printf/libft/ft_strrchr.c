/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgrandne <jgrandne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:51:28 by jgrandne          #+#    #+#             */
/*   Updated: 2019/10/16 19:41:15 by jgrandne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*last;

	if (!s)
		return (NULL);
	last = (0);
	while (*s)
	{
		if (*s == c)
			last = (char *)s;
		s++;
	}
	if (last)
		return (last);
	if (c == '\0')
		return ((char *)s);
	return (0);
}
