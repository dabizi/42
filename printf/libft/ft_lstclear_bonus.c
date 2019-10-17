/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgrandne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:07:09 by jgrandne          #+#    #+#             */
/*   Updated: 2019/10/15 17:37:59 by jgrandne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;
	t_list	*tmp;
	int		a;
	int		i;

	if (!lst)
		return ;
	if (!*lst || !del)
		return ;
	aux = *lst;
	a = ft_lstsize(aux);
	while (a-- > 0)
	{
		i = 0;
		aux = *lst;
		while (aux && i < a)
		{
			tmp = aux;
			aux = tmp->next;
			i++;
		}
		del(aux->content);
		free(aux);
	}
	*lst = NULL;
}
