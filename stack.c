/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:55:26 by isouaidi          #+#    #+#             */
/*   Updated: 2023/11/11 01:59:50 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	t_stack	*temp;

	while (st)
	{
		temp = st->next;
		free(st);
		st = temp;
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
	//printf("\n");
}

void	allstack(t_stack *st, char **av)
{
	int	i;

	i = -1;
	while (av[++i])
		st = pushstack(st, ft_atoi(av[i]));
	printstack(st);
	clearstack(st);
}
