/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <vkhlghat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:03:55 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/04/26 13:06:11 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

void	rev_rotate(t_list **stack)
{
	t_list	*tmp;

	if (!*stack || !((*stack)->next))
		return ;
	tmp = *stack;
	while ((*stack)->next->next)
	{
		*stack = (*stack)->next;
	}
	(*stack)->next->next = tmp;
	tmp = (*stack)->next;
	(*stack)->next = NULL;
	*stack = tmp;
}
