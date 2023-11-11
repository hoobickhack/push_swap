/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:56:04 by isouaidi          #+#    #+#             */
/*   Updated: 2023/11/11 19:16:49 by isouaidi         ###   ########.fr       */
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

char	**fparsing(int i, int ac, char **av)
{
	char	*str;
	char	*cpy;
	char	**arg;

	str = " ";
	while (i < ac)
	{
		checkav(av[i]);
		checkneg(av[i]);
		str = mostrjoin(str, av[i]);
		i++;
	}
	cpy = ft_strdup(str);
	free(str);
	arg = ft_split(cpy, ' ');
	free(cpy);
	return (arg);
}

void	checkpairs(char **arg)
{
	int	i;
	int	j;

	i = -1;
	while (arg[++i])
	{
		j = i + 1;
		while (arg[j])
		{
			if (ft_atoi(arg[j]) == ft_atoi(arg[i]))
				writeerreur(4);
			j++;
		}
		j++;
	}
}
