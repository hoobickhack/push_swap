/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:56:15 by isouaidi          #+#    #+#             */
/*   Updated: 2023/11/09 20:19:37 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	t_stack	*stack_a;
	//t_stack	*stb;

	stack_a = malloc (sizeof(t_stack));
	stack_a->next = NULL;
	i = 1;
	fparsing(i, ac, av);
	allstack(stack_a, ac, av);
	//sta->val = 0;
	//ft_printf("valeurfin%d\n", stack_a->val);

}
