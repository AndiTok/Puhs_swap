/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:03:36 by atok              #+#    #+#             */
/*   Updated: 2023/03/23 16:54:49 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	do_op(t_stack *stack, char *str)
{
	if (!ft_strcmp(str, "sa\n"))
		sa(stack);
	else if (!ft_strcmp(str, "sb\n"))
		sb(stack);
	else if (!ft_strcmp(str, "ss\n"))
		ss(stack);
	else if (!ft_strcmp(str, "pa\n"))
		pa(stack);
	else if (!ft_strcmp(str, "pb\n"))
		pb(stack);
	else if (!ft_strcmp(str, "ra\n"))
		ra(stack);
	else if (!ft_strcmp(str, "rb\n"))
		rb(stack);
	else if (!ft_strcmp(str, "rr\n"))
		rr(stack);
	else if (!ft_strcmp(str, "rra\n"))
		rra(stack);
	else if (!ft_strcmp(str, "rrb\n"))
		rrb(stack);
	else if (!ft_strcmp(str, "rrr\n"))
		rrr(stack);
	else
		write (1, "ERROR 404 : unknown op\n", 24);
}

	//char sa[3] = "sa";