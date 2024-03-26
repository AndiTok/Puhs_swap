/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minmax.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:25:06 by atok              #+#    #+#             */
/*   Updated: 2023/05/30 21:00:29 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_min(t_node *stack)
{
	t_node	*tmp;
	int		min;

	min = INT_MAX;
	tmp = stack;
	while (tmp != NULL)
	{
		if (tmp->index < min)
			min = tmp->index;
		tmp = tmp->next;
	}
	tmp = stack;
	while (tmp->index != min)
	{
		tmp = tmp->next;
	}
	return (tmp);
}

t_node	*ft_max(t_node *stack)
{
	t_node	*tmp;
	int		max;

	max = INT_MIN;
	tmp = stack;
	while (tmp != NULL)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->next;
	}
	tmp = stack;
	while (tmp->index != max)
		tmp = tmp->next;
	return (tmp);
}
	//printf("MIN:%d\n", min);
	//printf("MAX:%d\n", max);
	// t_node	*min;
	// t_node	*max;

	// min = ft_min(stack->stack_a); // 1
	// max = ft_max(stack->stack_a); // 3