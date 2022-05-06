/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:33:00 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/03/15 21:48:38 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

void	ft_sort_all(t_list **a, t_list **b)
{
	unsigned int	flag;
	unsigned int	x;

	x = ft_lstlen(a) / 10;
	flag = 0;
	while ((*a))
	{
		if ((*a)->index <= flag)
		{
			command(a, b, "pb\n");
			command(a, b, "rb\n");
			flag++;
		}
		else if ((*a)->index <= flag + x + 1)
		{
			command(a, b, "pb\n");
			flag++;
		}
		else
			ft_node_to_top_a(a, 0, flag + x + 1);
	}
	while ((*b))
		ft_max_from_b_to_a(a, b);
}
