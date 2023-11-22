/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:56:15 by isouaidi          #+#    #+#             */
/*   Updated: 2023/11/22 00:46:37 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	char	**arg;
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	arg = fparsing(0, ac, av);
	checkpairs(arg);
	allstack(stack_a, stack_b, arg);
	i = 0;
	while (arg[i])
		free(arg[i++]);
	free(arg);
}
