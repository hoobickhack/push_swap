/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:53:07 by isouaidi          #+#    #+#             */
/*   Updated: 2023/09/06 23:05:13 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		checkav(av[i]);
		checkneg(av[i]);
		ft_printf("%s", av[i]);
		i++;
	}
	checkdouble(ac, av);
}
