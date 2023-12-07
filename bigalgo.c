/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigalgo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:11:44 by isouaidi          #+#    #+#             */
/*   Updated: 2023/12/07 22:26:11 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bigalgo(t_stack **st, t_stack **st2, t_truct *truct, int i)
{
	int	size;
	int	max_num;
	int	max_bit;

	size = truct->sizet;
	max_num = size - 1;
	max_bit = 0;
	while (max_num >> max_bit != 0)
		max_bit++;
	i = 0;
	while (i < max_bit)
	{
		algo(i, *(&st), *(&st2), size);
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
