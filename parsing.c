/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:56:04 by isouaidi          #+#    #+#             */
/*   Updated: 2023/11/09 20:04:25 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	writeerreur(int a)
{
	if (a == 1)
		ft_printf("Error\n check your argument");
	if (a == 2)
		ft_printf("Error\n check - or +");
	if (a == 3)
		ft_printf("Error\n check your malloc in stack");
	if (a == 4)
		ft_printf("Error\n check your pairs");
	exit(1);
}

void	checkav(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (!(av[i] >= '0' && av[i] <= '9') && (!(av[i] == ' '))
			&& (!(av[i] == '-') && (!(av[i] == '+'))))
			writeerreur(1);
		i++;
	}
}

void	checkneg(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (av[i] == '-' && (!(av[i + 1] >= '0' && av[i + 1] <= '9')))
			writeerreur(2);
		if (av[i] == '+' && (!(av[i + 1] >= '0' && av[i + 1] <= '9')))
			writeerreur(2);
		if (av[i] == '-' && av[i + 1] == '-')
			writeerreur(2);
		if (av[i] == '+' && av[i + 1] == '+')
			writeerreur(2);
		if (av[i] == '+' && (av[i + 1] >= '0' && av[i + 1] <= '9')
			&& (av[i - 1] >= '0' && av[i - 1] <= '9'))
			writeerreur(2);
		if (av[i] == '-' && (av[i + 1] >= '0' && av[i + 1] <= '9')
			&& (av[i - 1] >= '0' && av[i - 1] <= '9'))
			writeerreur(2);
		i++;
	}
}

void	fparsing(int i, int ac, char **av)
{
	int	j;

	while (i < ac)
	{
		j = i + 1;
		checkav(av[i]);
		checkneg(av[i]);
		//ft_printf("%s\n", av[i]);
		while (j < ac)
		{
			if (ft_atoi(av[j]) == ft_atoi(av[i]))
				writeerreur(4);
			j++;
		}
		j++;
		i++;
	}
}
