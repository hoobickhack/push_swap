/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:56:15 by isouaidi          #+#    #+#             */
/*   Updated: 2023/12/07 20:12:13 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	char	**arg;
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_truct	truct;

	arg = fparsing(1, ac, av);
	truct.tab = convertir_tab(arg, &truct);
	truct.tab2 = convertir_tab(arg, &truct);
	beforetrie(&truct, 0);
	stack_a = NULL;
	stack_b = NULL;
	check_stack(arg);
	allstack(&stack_a, &stack_b, &truct);
	free(truct.tab);
	free(truct.tab2);
	clearstack(&stack_a);
	clearstack(&stack_b);
}
