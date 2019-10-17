/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgrandne <jgrandne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:22:46 by jgrandne          #+#    #+#             */
/*   Updated: 2019/10/11 16:32:58 by jgrandne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strnstr(const char *haystack,
	const char *needle, unsigned int len)
{
	unsigned int	pos;
	unsigned int	i;

	if (!*needle)
		return ((char*)haystack);
	pos = 0;
	while (haystack[pos] && pos < len)
	{
		if (haystack[pos] == needle[0])
		{
			i = 1;
			while (needle[i] && haystack[pos + i] == needle[i] &&
				(pos + i) < len)
				i++;
			if (needle[i] == '\0')
				return ((char *)&haystack[pos]);
		}
		pos++;
	}
	return (0);
}
