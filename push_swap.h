/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:13:08 by isouaidi          #+#    #+#             */
/*   Updated: 2023/09/27 21:46:55 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# include "./libft/inc/libft.h"
# include "./libft/inc/ft_printf.h"
# include "./libft/inc/get_next_line_bonus.h"

typedef struct s_stack
{
	int						val;
	struct stackElement		*next;
}	t_stack;

void	checkdouble(int ac, char **av);
void	checkav(char *av);
int		main(int ac, char **av);
void	writeerreur(int a);
void	checkneg(char *av);
t_stack	pushstack(t_stack st, int x);
#endif