/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <vkhlghat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:03:55 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/04/26 13:06:11 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

void	rotate_ab(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}
