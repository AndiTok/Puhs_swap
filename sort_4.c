/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:41:46 by atok              #+#    #+#             */
/*   Updated: 2023/05/30 20:10:01 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pbs3pa(t_stack *stack)
{
	pb(stack);
	sort_3(stack);
	pa(stack);
}

void	rrapbs3pa(t_stack *stack)
{
	rra(stack);
	pbs3pa(stack);
}

void	sort_4(t_stack *stack)
{	
	t_node	*first;
	t_node	*second;
	t_node	*last;

	first = stack->stack_a;
	second = stack->stack_a->next;
	last = stack->stack_a;
	while (last->next != NULL)
		last = last->next;
	if (first->index == 1)
		pbs3pa(stack);
	else if (second->index == 1)
	{
		sa(stack);
		pbs3pa(stack);
	}
	else if (last->prev->index == 1)
	{
		rra(stack);
		rrapbs3pa(stack);
	}
	else if (last->index == 1)
		rrapbs3pa(stack);
}

// without else if testing 1 4 3 2 or 4 1 3 2 makes it run alot