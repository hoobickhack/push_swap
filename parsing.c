/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:56:04 by isouaidi          #+#    #+#             */
/*   Updated: 2023/12/02 19:03:21 by isouaidi         ###   ########.fr       */
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
	if (a == 5)
		ft_printf("Error\n check int max or int min");
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

char	**fparsing(int i, int ac, char **av)
{
	char	*str;
	char	**arg;

	str = ft_strdup("");
	while (i < ac)
	{
		checkav(av[i]);
		checkneg(av[i]);
		str = mostrjoin(str, av[i]);
		i++;
	}
	arg = ft_split(str, ' ');
	free(str);
	return (arg);
}
