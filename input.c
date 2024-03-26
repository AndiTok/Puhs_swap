/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:16:08 by atok              #+#    #+#             */
/*   Updated: 2023/04/19 13:06:49 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	input(t_stack *stack)
{
	char	*str;

	str = get_next_line(STDIN_FILENO);
	while (str != NULL)
	{
		do_op(stack, str);
		str = get_next_line(STDIN_FILENO);
	}
	if (ft_sorted(stack->stack_a) == 1 && stack->stack_b == NULL)
		write(1, "OK!\n", 4);
	else
		write(1, "K.O.\n", 5);
}
		//printf("input: %s", str);
