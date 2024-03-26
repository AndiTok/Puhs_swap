/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:23:20 by atok              #+#    #+#             */
/*   Updated: 2023/03/14 18:05:23 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5(t_stack *stack)
{
	t_node	*min;
	t_node	*max;

	min = ft_min(stack->stack_a);
	max = ft_max(stack->stack_a);
	while (min != stack->stack_a)
	{
		if (min == stack->stack_a->next || min == stack->stack_a->next->next)
			ra(stack);
		else
			rra(stack);
	}
	pb(stack);
	while (max != stack->stack_a)
	{
		if (max == stack->stack_a->next || min == stack->stack_a->next->next)
			ra(stack);
		else
			rra(stack);
	}
	pb(stack);
	sort_3(stack);
	pa(stack);
	ra(stack);
	pa(stack);
}
	//printf("min = %ld\n", min->data);
	//printf("max = %ld\n", max->data);
