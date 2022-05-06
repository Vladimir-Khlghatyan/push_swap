/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_from_b_to_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:33:00 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/03/15 21:48:38 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

static unsigned int	max(t_list **lst)
{
	unsigned int	max;
	t_list			*tmp;

	tmp = *lst;
	max = tmp->index;
	while (tmp)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->next;
	}
	return (max);
}

void	ft_max_from_b_to_a(t_list **a, t_list **b)
{
	unsigned int	m;

	m = max(b);
	ft_node_to_top_b(b, m, m);
	command(a, b, "pa\n");
}
