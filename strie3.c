/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strie3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:31:43 by isouaidi          #+#    #+#             */
/*   Updated: 2023/12/11 18:26:37 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	smalalgo(t_stack **st, t_stack **st2, t_truct *truct)
{
	if (truct -> sizet == 5)
	{
		*st = index5(*(&st),*(&st2), truct);
	}
	if (truct -> sizet == 4)
	{
		*st = index4(*(&st),*(&st2), truct);
	}
	if (truct -> sizet == 3)
	{
		*st = index3(*(&st));
		*st = index31(*(&st));
	}
	if (truct -> sizet == 2)
		*st = index2(*(&st));
}

int	goodpush(t_truct *truct)
{
	int	i;
	int	j;
	int	c;

	j = 0;
	i = 0;
	while (i < truct->sizet)
	{
		if (truct->tab[i] == truct->tab2[i])
			j++;
		i++;
	}
	if (i == j)
		c = 1;
	else
		c = 0;
	return (c);
}
