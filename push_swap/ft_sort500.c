/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort500.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:33:00 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/03/15 21:48:38 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

void	ft_sort500(t_list **a, t_list **b)
{
	unsigned int	flag;
	int				rb;

	flag = 0;
	rb = 0;
	while ((*a))
	{
		if ((*a)->index <= flag)
		{
			flag += command(a, b, "pb\n");
			rb += ft_rr2(a, b, flag + 30);
		}
		else if ((*a)->index <= flag + 30)
			flag += command(a, b, "pb\n");
		else
		{
			if (ft_lstlen(b) > 1 && flag - rb > 1)
				ft_node_to_top_a_with_ss(a, b, 0, flag + 30);
			else
				ft_node_to_top_a(a, 0, flag + 30);
		}
	}
	while ((*b))
		ft_max_from_b_to_a(a, b);
}
