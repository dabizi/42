/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgrandne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:03:42 by jgrandne          #+#    #+#             */
/*   Updated: 2019/10/16 15:51:01 by jgrandne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void*))
{
	t_list	*crt;

	if (!lst || !f)
		return (NULL);
	if (!(crt = ft_lstnew(f(lst->content))))
		return (NULL);
	crt->next = ft_lstmap(lst->next, f);
	return (crt);
}
