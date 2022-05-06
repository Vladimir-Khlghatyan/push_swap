/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <vkhlghat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:03:55 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/04/26 13:06:11 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

void	swap(t_list **stack)
{
	t_list	*tmp1;
	t_list	*tmp2;
	t_list	*tmp3;

	if (!*stack || !((*stack)->next))
		return ;
	tmp1 = (*stack);
	tmp2 = (*stack)->next;
	tmp3 = (*stack)->next->next;
	(*stack)->next->next = tmp1;
	(*stack)->next = tmp3;
	*stack = tmp2;
}
