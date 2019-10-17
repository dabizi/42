/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgrandne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:42:22 by jgrandne          #+#    #+#             */
/*   Updated: 2019/10/17 19:04:19 by jgrandne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./inc/ft_printf.h"

int		main(int ac, char **av)
{
	ac = 1;
	av[1] = "q";

	printf("Test de C\n");
	printf("%c\n", av[1][0]);
	ft_printf("%c\n", av[1][0]);
	printf("\n");

	printf("Test de S\n");
	printf("%s\n", av[1]);
	ft_printf("%s\n", av[1]);
	return (0);
}
