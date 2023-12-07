/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strie.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 01:44:53 by isouaidi          #+#    #+#             */
/*   Updated: 2023/12/03 19:39:15 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*index2(t_stack **st)
{
	t_stack	*v2;

	v2 = (*st)->next;
	if ((*st)->index > v2->index)
	{
		*st = swap(*st);
		ft_printf("sa\n");
	}
	return (*st);
}

t_stack	*index3(t_stack **st)
{
	t_stack	*v2;
	t_stack	*v3;

	v2 = (*st)->next;
	v3 = (*st)->next->next;
	if ((v2 -> index > v3->index && v2->index > (*st)->index)
		&& ((*st)->index < v2->index && (*st)->index < v3-> index))
	{
		*st = swap(*st);
		ft_printf("sa\n");
		*st = r(*st);
		ft_printf("ra\n");
	}
	else if (((*st)->index > v2->index && (*st)->index > v3->index)
		&& (v3->index < v2->index && v3->index < (*st)->index))
	{
		*st = swap(*st);
		ft_printf("sa\n");
		*st = rr(*st);
		ft_printf("rra\n");
	}
	return (*st);
}

t_stack	*index31(t_stack **st)
{
	t_stack	*v2;
	t_stack	*v3;

	v2 = (*st)->next;
	v3 = (*st)->next->next;
	if (((*st)->index > v2->index && (*st)->index > v3->index)
		&& v2->index < (*st)->index && v2->index < v3->index)
	{
		*st = r(*st);
		ft_printf("ra\n");
	}
	else if ((v2-> index < (*st)->index && v2->index < v3->index)
		&& ((*st)->index < v3->index && v3->index > v2->index))
	{
		*st = swap(*st);
		ft_printf("sa\n");
	}
	else if ((v3-> index < (*st)->index && v3->index < v2->index)
		&& (v2->index > (*st)->index && v2->index > v3->index))
	{
		*st = rr(*st);
		ft_printf("rra\n");
	}
	return (*st);
}

t_stack	*index4(t_stack **st, t_stack **st2, t_truct *truct)
{
	if (truct->sizet < 5)
	{
		push(*(&st), *(&st2));
		ft_printf("pb\n");
	}
	*st = index3(*(&st));
	*st = index31(*(&st));
	push(*(&st2), *(&st));
	ft_printf("pa\n");
	*st = index40(*(&st));
	*st = index41(*(&st));
	return (*st);
}

t_stack	*index40(t_stack**st)
{
	t_stack	*v2;
	t_stack	*v3;
	t_stack	*v4;

	v2 = (*st)->next;
	v3 = (*st)->next->next;
	v4 = (*st)->next->next->next;
	if ((*st)->index > v2->index && (*st)->index > v3->index
		&& (*st)->index > v4->index)
	{
		*st = r(*st);
		ft_printf("ra\n");
	}
	if ((*st)->index > v2->index && (*st)->index < v3->index
		&& (*st)->index < v4->index)
	{
		*st = swap(*st);
		ft_printf("sa\n");
	}
	return (*st);
}
