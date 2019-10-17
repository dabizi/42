/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgrandne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:09:19 by jgrandne          #+#    #+#             */
/*   Updated: 2019/10/11 13:23:24 by jgrandne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rest_str;
	int		i;

	if (s && f)
	{
		if (!(rest_str = (char *)malloc((ft_strlen((char *)s) + 1))))
			return (NULL);
		if (rest_str)
		{
			i = 0;
			while (s[i] != '\0')
			{
				rest_str[i] = (*f)(i, s[i]);
				i++;
			}
			rest_str[i] = '\0';
			return (rest_str);
		}
	}
	return (NULL);
}
