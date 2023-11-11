/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 01:54:40 by isouaidi          #+#    #+#             */
/*   Updated: 2023/11/11 15:05:51 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*mostrjoin(char const *s1, char const *s2)
{
	int		i;
	int		c;
	char	*result;

	i = 0;
	c = 0;
	result = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 3);
	if (!result)
		return (0);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	result[i++] = ' ';
	while (s2[c])
	{
		result[i] = s2[c];
		i++;
		c++;
	}
	result[i++] = ' ';
	result[i] = '\0';
	return (result);
}
