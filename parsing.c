/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:49:11 by isouaidi          #+#    #+#             */
/*   Updated: 2023/09/27 21:54:55 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	writeerreur(int a)
{
	if (a == 1)
		ft_printf("Error\n check your argument");
	if (a == 2)
		ft_printf("Error\n check - or +");
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
		if (av[i] == '-' && av[i + 1] == '-')
			writeerreur(2);
		if (av[i] == '+' && av[i + 1] == '+')
			writeerreur(2);
		i++;
	}
}
/*
void	checkdouble(int ac, char **av)
{
	int	val;
	int	i;
	int	j;

	i = 0;
	val = ft_atoi(*av);
	if (ac > 2)
	{
		j = 1;
		while (ac)
		{
			if (val[i] != val[j])
				j++;
			else
				writeerreur(1);
			i++;
		}
	}
}
*/

/*t_stack	pushstack(stack st, int x);
{
	int	i;

	i = 1;
	stackElement	*element;
	element = malloc (sizeof(*element));
	element->value = ft_atoi(av[i]);
	element->next = st;
	i++;
	return (element);
}
*/
/*void separgu(char **av)
{
	int i;
	int	j:

	i = 1;
	while(av[i])
	{
		j = 0;
		while(av[i][j])
		{
			if(av[i][j] == ' ')

		} 
	}
}*/
