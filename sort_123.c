/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort123.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:45:08 by atok              #+#    #+#             */
/*   Updated: 2023/03/15 13:09:28 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_1(t_stack *stack)
{
	if (stack->counter_a == 1)
		return ;
}

void	sort_2(t_stack *stack)
{	
	t_node	*first;
	t_node	*second;

	first = stack->stack_a;
	second = stack->stack_a->next;
	if (first->index > second->index)
		sa(stack);
	else
		return ;
}

void	sort_3a(t_stack *stack, int first, int second, int last)
{
	if (first > second && second < last && last > first)
		sa(stack);
	else if (first > second && second > last && last < first)
	{
		sa(stack);
		rra(stack);
	}
	else if (first > second && second < last && last < first)
		ra(stack);
}

void	sort_3(t_stack *stack)
{
	t_node	*first;
	t_node	*second;
	t_node	*last;

	first = stack->stack_a;
	second = stack->stack_a->next;
	last = stack->stack_a;
	while (last->next != NULL)
		last = last->next;
	if (first->index > second->index)
		sort_3a(stack, first->index, second->index, last->index);
	else if (first->index < second->index && second->index > last->index && \
		last->index > first->index)
	{
		sa(stack);
		ra(stack);
	}
	else if (first->index < second->index && second->index > last->index && \
		last->index < first->index)
		rra(stack);
}

void	sort_123(t_stack *stack)
{
	if (stack->counter_a == 1)
		sort_1(stack);
	if (stack->counter_a == 2)
		sort_2(stack);
	if (stack->counter_a == 3)
		sort_3(stack);
}
