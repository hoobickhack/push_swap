/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:55:56 by isouaidi          #+#    #+#             */
/*   Updated: 2023/11/11 20:20:24 by isouaidi         ###   ########.fr       */
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
	unsigned int			index;
	int						val;
	struct s_stack			*next;
}	t_stack;

void	checkav(char *av);
int		main(int ac, char **av);
void	writeerreur(int a);
void	checkneg(char *av);
t_stack	*pushstack(t_stack *st, int x);
void	clearstack(t_stack *st);
void	printstack(t_stack *st);
void	allstack(t_stack *st, char **av);
char	**fparsing(int i, int ac, char **av);
char	*mostrjoin(char *s1, char *s2);
void	checkpairs(char **arg);

#endif