/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <vkhlghat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:03:55 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/04/26 13:06:11 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

int	command(t_list **stack_a, t_list **stack_b, char *s)
{
	if (*stack_a && ft_sort_check(stack_a, stack_b) == 2)
		return (0);
	if (!ft_strcmp(s, "sa\n"))
		swap(stack_a);
	else if (!ft_strcmp(s, "sb\n"))
		swap(stack_b);
	else if (!ft_strcmp(s, "ss\n"))
		swap_ab(stack_a, stack_b);
	else if (!ft_strcmp(s, "pa\n"))
		push(stack_b, stack_a);
	else if (!ft_strcmp(s, "pb\n"))
		push(stack_a, stack_b);
	else if (!ft_strcmp(s, "ra\n"))
		rotate(stack_a);
	else if (!ft_strcmp(s, "rb\n"))
		rotate(stack_b);
	else if (!ft_strcmp(s, "rr\n"))
		rotate_ab(stack_a, stack_b);
	else if (!ft_strcmp(s, "rra\n"))
		rev_rotate(stack_a);
	else if (!ft_strcmp(s, "rrb\n"))
		rev_rotate(stack_b);
	else if (!ft_strcmp(s, "rrr\n"))
		rev_rotate_ab(stack_a, stack_b);
	return (ft_putstr(s));
}
