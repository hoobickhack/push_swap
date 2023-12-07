/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:55:26 by isouaidi          #+#    #+#             */
/*   Updated: 2023/12/07 22:26:46 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*pushstack(t_stack **st, int x)
{
	t_stack	*element;
	t_stack	*temp;

	element = malloc (sizeof(t_stack));
	if (!element)
		return (0);
	element->val = x;
	element->next = NULL;
	if (*st == NULL)
		return (element);
	temp = *st;
	while (temp->next)
		temp = temp->next;
	temp->next = element;
	return (*st);
}

void	clearstack(t_stack **st)
{
	t_stack	*temp;

	while (*st)
	{
		temp = (*st)->next;
		free (*st);
		*st = temp;
	}
}

void	printstack(t_stack *st)
{
	while (st != NULL)
	{
		ft_printf("%d\n", st->val);
		st = st->next;
	}
}

void	allstack(t_stack **st, t_stack **st2, t_truct *truct)
{
	int	i;

	i = 0;
	while (i < truct->sizet)
	{
		*st = pushstack(*(&st), truct->tab2[i]);
		i++;
	}
	indexst(*st, truct, 0, 0);
	if (truct -> sizet < 6)
		smalalgo(*(&st),*(&st2), truct);
	else
		bigalgo(*(&st),*(&st2), truct, 0);
}
