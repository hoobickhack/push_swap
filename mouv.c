/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:19:45 by isouaidi          #+#    #+#             */
/*   Updated: 2023/12/03 00:14:19 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*r(t_stack *st)
{
	t_stack	*temp2;
	t_stack	*temp;

	temp = st;
	temp2 = st->next;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = st;
	st = temp2;
	temp->next->next = NULL;
	return (st);
}

t_stack	*rr(t_stack *st)
{
	t_stack	*temp;
	t_stack	*temp2;

	temp = st;
	while (temp->next != NULL)
		temp = temp->next;
	temp2 = st;
	if (temp2->next != NULL)
		while (temp2->next->next != NULL)
			temp2 = temp2->next;
	temp->next = st;
	temp2->next = NULL;
	return (temp);
}

void	push(t_stack **st, t_stack **st2)
{
	t_stack	*temp;

	temp = *st;
	*st = (*st)->next;
	temp->next = *st2;
	*st2 = temp;
}

t_stack	*swap(t_stack *st)
{
	t_stack	*temp;

	temp = st->next;
	st->next = temp->next;
	temp->next = st;
	st = temp;
	return (st);
}
