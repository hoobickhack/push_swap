/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strie2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:50:49 by isouaidi          #+#    #+#             */
/*   Updated: 2023/12/03 19:25:22 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*index41(t_stack **st)
{
	t_stack	*v2;
	t_stack	*v3;
	t_stack	*v4;

	v2 = (*st)->next;
	v3 = (*st)->next->next;
	v4 = (*st)->next->next->next;
	if ((*st)->index > v2->index && (*st)->index > v3->index
		&& (*st)->index < v4->index)
	{
		*st = rr(*st);
		ft_printf("rra\n");
		*st = swap(*st);
		ft_printf("sa\n");
		*st = r(*st);
		ft_printf("ra\n");
		*st = r(*st);
		ft_printf("ra\n");
	}
	return (*st);
}

t_stack	*index5(t_stack **st, t_stack **st2, t_truct *truct)
{
	t_stack	*v2;

	push(*(&st), *(&st2));
	ft_printf("pb\n");
	push(*(&st), *(&st2));
	ft_printf("pb\n");
	v2 = (*st2)->next;
	if ((*st2)->index > v2->index)
	{
		*st2 = swap(*st2);
		ft_printf("sb\n");
	}
	*st = index4(*(&st), *(&st2), truct);
	push(*(&st2), *(&st));
	ft_printf("pa\n");
	*st = index50(*(&st));
	*st = index51(*(&st));
	*st = index52(*(&st));
	return (*st);
}

t_stack	*index50(t_stack**st)
{
	t_stack	*v2;
	t_stack	*v3;
	t_stack	*v4;
	t_stack	*v5;

	v2 = (*st)->next;
	v3 = (*st)->next->next;
	v4 = (*st)->next->next->next;
	v5 = (*st)->next->next->next->next;
	if ((*st)->index > v2->index && (*st)->index < v3->index
		&& (*st)->index < v4->index && (*st)->index < v5->index)
	{
		*st = swap(*st);
		ft_printf("sa\n");
	}
	if ((*st)->index > v2->index && (*st)->index > v3->index
		&& (*st)->index > v4->index && (*st)->index > v5->index)
	{
		*st = r(*st);
		ft_printf("ra\n");
	}
	return (*st);
}

t_stack	*index51(t_stack**st)
{
	t_stack	*v2;
	t_stack	*v3;
	t_stack	*v4;
	t_stack	*v5;

	v2 = (*st)->next;
	v3 = (*st)->next->next;
	v4 = (*st)->next->next->next;
	v5 = (*st)->next->next->next->next;
	if ((*st)->index > v2->index && (*st)->index > v3->index
		&& (*st)->index < v4->index && (*st)->index < v5->index)
	{
		*st = swap(*st);
		ft_printf("sa\n");
		*st = r(*st);
		ft_printf("ra\n");
		*st = swap(*st);
		ft_printf("sa\n");
		*st = rr(*st);
		ft_printf("rra\n");
	}
	return (*st);
}

t_stack	*index52(t_stack**st)
{
	t_stack	*v2;
	t_stack	*v3;
	t_stack	*v4;
	t_stack	*v5;

	v2 = (*st)->next;
	v3 = (*st)->next->next;
	v4 = (*st)->next->next->next;
	v5 = (*st)->next->next->next->next;
	if ((*st)->index > v2->index && (*st)->index > v3->index
		&& (*st)->index > v4->index && (*st)->index < v5->index)
	{
		*st = rr(*st);
		ft_printf("rra\n");
		*st = swap(*st);
		ft_printf("sa\n");
		*st = r(*st);
		ft_printf("ra\n");
		*st = r(*st);
		ft_printf("ra\n");
	}
	return (*st);
}
