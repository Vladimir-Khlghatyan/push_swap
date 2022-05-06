/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <vkhlghat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:03:55 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/04/26 13:06:11 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

void	push(t_list **stack_out, t_list **stack_in)
{
	t_list	*tmp_out1;
	t_list	*tmp_out2;
	t_list	*tmp_in1;
	t_list	*tmp_in2;

	if (!stack_out)
		return ;
	if (!*stack_in)
	{
		tmp_out2 = (*stack_out)->next;
		(*stack_out)->next = NULL;
		*stack_in = *stack_out;
		*stack_out = tmp_out2;
	}
	else
	{
		tmp_out1 = *stack_out;
		tmp_out2 = (*stack_out)->next;
		tmp_in1 = *stack_in;
		tmp_in2 = (*stack_in)->next;
		*stack_in = *stack_out;
		(*stack_in)->next = tmp_in1;
		*stack_out = tmp_out2;
	}
}
