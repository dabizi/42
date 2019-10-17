/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgrandne <jgrandne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:44:06 by jgrandne          #+#    #+#             */
/*   Updated: 2019/10/16 15:54:51 by jgrandne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*psrc;
	unsigned char		*pdest;

	pdest = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	i = 0;
	if (!n || dst == src)
		return (NULL);
	while (i < n)
	{
		pdest[i] = psrc[i];
		if (pdest[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
