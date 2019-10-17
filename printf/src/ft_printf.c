/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgrandne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:10:07 by jgrandne          #+#    #+#             */
/*   Updated: 2019/10/17 19:00:20 by jgrandne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "../inc/ft_printf.h"

static int			ft_switch(char c)
{
	if (c == 'c')
		ft_putchar_fd('c', 1);
	else if (c == 's')
		ft_putchar_fd('s', 1);
	else if (c == 'p')
		ft_putchar_fd('p', 1);
	else if (c == 'd')
		ft_putchar_fd('d', 1);
	else if (c == 'i')
		ft_putchar_fd('i', 1);
	else if (c == 'u')
		ft_putchar_fd('u', 1);
	else if (c == 'x')
		ft_putchar_fd('x', 1);
	else if (c == 'X')
		ft_putchar_fd('X', 1);
	else if (c == '%')
		ft_putchar_fd('%', 1);
	else
		return (-1);
	return (0);
}

int					ft_printf(const char *str, ...)
{
	va_list		aux;
	int			end;
	int			i;

	i = 0;
	end = 0;
	va_start(aux, str);
	while (!end && str[i])
	{
		if (str[i] == '%')
		{
			ft_switch(str[i + 1]);
			i += 2;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			i++;
		}
	}
	va_end(aux);
	return (0);
}
