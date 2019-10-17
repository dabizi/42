/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgrandne <jgrandne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 20:05:56 by jgrandne          #+#    #+#             */
/*   Updated: 2019/10/16 16:05:43 by jgrandne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	const char		*psrc;
	char			*pdst;

	if (!dst && !src)
		return (NULL);
	psrc = src;
	pdst = dst;
	if (!len)
		return (dst);
	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	psrc += len;
	pdst += len;
	while (len--)
		*--pdst = *--psrc;
	return (dst);
}
