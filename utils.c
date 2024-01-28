/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 01:54:40 by isouaidi          #+#    #+#             */
/*   Updated: 2024/01/28 01:26:05 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*mostrjoin(char *s1, char *s2)
{
	int		i;
	int		c;
	char	*result;

	i = 0;
	c = 0;
	result = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 3);
	if (!result)
		return (0);
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	result[i++] = ' ';
	free(s1);
	while (s2[c] != '\0')
	{
		result[i] = s2[c];
		i++;
		c++;
	}
	result[i++] = ' ';
	result[i] = '\0';
	return (result);
}

int	*convertir_tab(char **arg, t_truct *truct)
{
	int	i;
	int	b;
	int	*tab;

	b = 0;
	while (arg[b])
		b++;
	tab = malloc(sizeof(int *) * b + 1);
	i = 0;
	while (i < b)
	{
		tab[i] = ft_atoi(arg[i]);
		i++;
	}
	truct->sizet = i;
	return (tab);
}

void	check_stack(char **arg)
{
	int	i;

	i = 0;
	checkpairs(arg);
	while (arg[i])
		free(arg[i++]);
	free(arg);
}

void	beforetrie(t_truct *truct, int i)
{
	int	temp;
	int	min;
	int	j;

	while (i < truct->sizet)
	{
		j = i + 1;
		min = i;
		while (j < truct->sizet)
		{
			if (truct->tab[j] < truct->tab[min])
				min = j;
			j++;
		}
		if (min != i)
		{
			temp = truct->tab[i];
			truct->tab[i] = truct->tab[min];
			truct->tab[min] = temp;
		}
		i++;
	}
}

void	indexst(t_stack *st, t_truct *truct, int i, int c)
{
	int		count;
	t_stack	*temp;

	count = 0;
	temp = st;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	while (count != i)
	{
		c = 0;
		while (c != i)
		{
			if (truct->tab[c] == st->val)
			{
				st->index = c + 1;
				count++;
			}
			c++;
		}
		st = st->next;
	}
}
