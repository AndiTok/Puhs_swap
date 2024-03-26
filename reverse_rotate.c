/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 21:00:24 by atok              #+#    #+#             */
/*   Updated: 2023/03/18 17:58:50 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack)
{
	t_node	*first;
	t_node	*ndlast;
	t_node	*last;

	if (stack->stack_a == NULL || stack->stack_a->next == NULL)
		return ;
	first = stack->stack_a;
	ndlast = stack->stack_a;
	last = stack->stack_a;
	while (last->next != NULL)
		last = last->next;
	while (ndlast->next != NULL)
		ndlast = ndlast->next;
	ndlast = ndlast->prev;
	ndlast->next = NULL;
	last->next = first;
	last->prev = NULL;
	first->prev = last;
	stack->stack_a = last;
	if (stack->type == SORTER)
		write(1, "rra\n", 4);
}

void	rrb(t_stack *stack)
{
	t_node	*first;
	t_node	*ndlast;
	t_node	*last;

	if (stack->stack_b == NULL || stack->stack_b->next == NULL)
		return ;
	first = stack->stack_b;
	ndlast = stack->stack_b;
	last = stack->stack_b;
	while (last->next != NULL)
		last = last->next;
	while (ndlast->next != NULL)
		ndlast = ndlast->next;
	ndlast = ndlast->prev;
	ndlast->next = NULL;
	last->next = first;
	last->prev = NULL;
	first->prev = last;
	stack->stack_b = last;
	if (stack->type == SORTER)
		write(1, "rrb\n", 4);
}

void	trra(t_stack *stack)
{
	t_node	*first;
	t_node	*ndlast;
	t_node	*last;

	if (stack->stack_a == NULL || stack->stack_a->next == NULL)
		return ;
	first = stack->stack_a;
	ndlast = stack->stack_a;
	last = stack->stack_a;
	while (last->next != NULL)
		last = last->next;
	while (ndlast->next != NULL)
		ndlast = ndlast->next;
	ndlast = ndlast->prev;
	ndlast->next = NULL;
	last->next = first;
	last->prev = NULL;
	first->prev = last;
	stack->stack_a = last;
}

void	trrb(t_stack *stack)
{
	t_node	*first;
	t_node	*ndlast;
	t_node	*last;

	if (stack->stack_b == NULL || stack->stack_b->next == NULL)
		return ;
	first = stack->stack_b;
	ndlast = stack->stack_b;
	last = stack->stack_b;
	while (last->next != NULL)
		last = last->next;
	while (ndlast->next != NULL)
		ndlast = ndlast->next;
	ndlast = ndlast->prev;
	ndlast->next = NULL;
	last->next = first;
	last->prev = NULL;
	first->prev = last;
	stack->stack_b = last;
}

void	rrr(t_stack *stack)
{
	trra(stack);
	trrb(stack);
	if (stack->type == SORTER)
		write(1, "rrr\n", 4);
}
