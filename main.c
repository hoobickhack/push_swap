/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyes <ilyes@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:53:07 by isouaidi          #+#    #+#             */
/*   Updated: 2023/11/06 18:51:52 by ilyes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	t_stack	*sta;

	sta = malloc (sizeof(t_stack));
	sta->next = NULL;
	i = 1;
	
	while (i < ac)
	{
		checkav(av[i]);
		checkneg(av[i]);
		ft_printf("%s", av[i]);
		i++;
	}
	printf("\n\n");
	if (sta == NULL)
		ft_printf("ok");
	sta = pushstack(sta, 42);
	if (sta != NULL)
		ft_printf("cpasnul\n");
	printstack(sta);
	sta = pushstack(sta, 43);
	printstack(sta);
	clearstack(sta);
	if (sta == NULL)
		ft_printf("fin");
}
