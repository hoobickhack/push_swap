/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:56:15 by isouaidi          #+#    #+#             */
/*   Updated: 2023/11/11 19:12:48 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	char	**arg;
	t_stack	*stack_a;
	//t_stack	*stb;

	i = 1;
	arg = fparsing(i, ac, av);
	checkpairs(arg);
	stack_a = malloc (sizeof(t_stack));
	stack_a->next = NULL;
	allstack(stack_a, arg);
	free(arg);
}
