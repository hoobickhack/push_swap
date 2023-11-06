/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyes <ilyes@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:49:11 by isouaidi          #+#    #+#             */
/*   Updated: 2023/11/06 18:48:31 by ilyes            ###   ########.fr       */
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

t_stack	*pushstack(t_stack *st, int x)
{
	t_stack	*element;

	element = malloc (sizeof(t_stack));
	if (element == NULL)
		writeerreur(3);
	element->val = x;
	element->next = st;
	return (element);
}

void	clearstack(t_stack *st)
{
	t_stack	*element;
	while (st)
	{
		element = st;
		st = st->next;
		free(element);
	}
}

void	printstack(t_stack *st)
{
	if (st == NULL)
		return ;
	while (st->next != NULL)
	{
		ft_printf("%d\n", st->val);
		st = st->next;
	}
	printf("\n");
}
