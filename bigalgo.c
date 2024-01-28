/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigalgo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:11:44 by isouaidi          #+#    #+#             */
/*   Updated: 2024/01/28 20:40:51 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bigalgo(t_stack **st, t_stack **st2, t_truct *truct, int i)
{
	int	max_bit;

	max_bit = 0;
	while ((truct->sizet) >> max_bit != 0)
		max_bit++;
	while (i < max_bit)
	{
		algo(i, st, st2, truct->sizet);
		while (*st2 != NULL)
		{
			push(*(&st2), *(&st));
			ft_printf("pa\n");
		}
		i++;
	}
}

void	algo(int i, t_stack **st, t_stack **st2, int size)
{
	int	num;
	int	j;

	j = 0;
	while (j < size)
	{
		num = (*st)->index;
		if (((num >> i) & 1) == 1)
		{
			*st = r(*st);
			ft_printf("ra\n");
		}
		else
		{
			push(*(&st), *(&st2));
			ft_printf("pb\n");
		}
		j++;
	}
}
