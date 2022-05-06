/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <vkhlghat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:03:55 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/04/26 13:06:11 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*tmp;

	if (!*stack || !((*stack)->next))
		return ;
	tmp = *stack;
	while ((*stack)->next)
	{
		*stack = (*stack)->next;
	}
	(*stack)->next = tmp;
	*stack = (*stack)->next;
	tmp = tmp->next;
	(*stack)->next = NULL;
	*stack = tmp;
}
