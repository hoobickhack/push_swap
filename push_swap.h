/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:55:56 by isouaidi          #+#    #+#             */
/*   Updated: 2023/12/11 18:07:30 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <limits.h>

# include "./libft/inc/libft.h"
# include "./libft/inc/ft_printf.h"
# include "./libft/inc/get_next_line_bonus.h"

typedef struct s_stack
{
	int					index;
	int					val;
	struct s_stack		*next;
}	t_stack;

typedef struct s_truct
{
	int	*tab2;
	int	sizet;
	int	*tab;
}	t_truct;

void	checkav(char *av);
int		main(int ac, char **av);
void	writeerreur(int a);
void	checkneg(char *av);
t_stack	*pushstack(t_stack **st, int x);
void	clearstack(t_stack **st);
void	printstack(t_stack *st);
void	allstack(t_stack **st, t_stack **st2, t_truct *truct);
char	**fparsing(int i, int ac, char **av);
char	*mostrjoin(char *s1, char *s2);
void	checkpairs(char **arg);
t_stack	*supelement(t_stack *st);
t_stack	*rr(t_stack *st);
void	push(t_stack **st, t_stack **st2);
void	pusha(t_stack *st, t_stack *st2);
t_stack	*swap(t_stack *st);
t_stack	*r(t_stack *st);
t_stack	*rr(t_stack *st);
int		*convertir_tab(char **arg, t_truct *truct);
void	check_stack(char **arg);
void	beforetrie(t_truct *truct, int i);
void	indexst(t_stack *st, t_truct *truct, int i, int c);
int		ft_inlen(int *tab);
t_stack	*index2(t_stack **st);
// void	annoncetrie2(t_stack *st, t_stack *st2, int a);
// void	annoncetrie(t_stack *st, t_stack *st2, int a)
t_stack	*index3(t_stack **st);
t_stack	*index31(t_stack **st);
t_stack	*index4(t_stack **st, t_stack **st2, t_truct *truct);
t_stack	*index40(t_stack**st);
t_stack	*index41(t_stack**st);
t_stack	*index5(t_stack **st, t_stack **st2, t_truct *truct);
t_stack	*index50(t_stack**st);
t_stack	*index51(t_stack**st);
t_stack	*index52(t_stack**st);
void	smalalgo(t_stack **st, t_stack **st2, t_truct *truct);
void	bigalgo(t_stack **st, t_stack **st2, t_truct *truct, int i);
void	algo(int i, t_stack **st, t_stack **st2, int size);
int		goodpush(t_truct *truct);

#endif