/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 21:04:34 by atok              #+#    #+#             */
/*   Updated: 2023/03/07 17:19:58 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_nodes_to_stack_a(t_stack *stack, int num)
{
	t_node	*new_node;
	t_node	*current_node;

	new_node = (t_node *) malloc (sizeof(t_node));
	new_node->index = -42;
	new_node->data = num;
	new_node->next = NULL;
	if (stack->stack_a == NULL)
	{
		new_node->prev = NULL;
		stack->stack_a = new_node;
		stack->counter_a++;
	}
	else
	{
		current_node = stack->stack_a;
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
		new_node->prev = current_node;
		stack->counter_a++;
	}
}
