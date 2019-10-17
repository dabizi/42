/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgrandne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:59:26 by jgrandne          #+#    #+#             */
/*   Updated: 2019/10/14 17:15:46 by jgrandne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void		ft_lstadd_back(t_list **alst, t_list *now)
{
	t_list		*temp;

	if (!now || !alst)
		return ;
	temp = *alst;
	if (*alst == NULL)
		*alst = now;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = now;
	}
}
