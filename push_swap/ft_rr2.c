/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:33:00 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/03/15 21:48:38 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

int	ft_rr2(t_list **a, t_list **b, int flag)
{
	int	limit;
	int	rtn;

	limit = ft_find(a, 0, flag);
	rtn = 0;
	if (limit > 0)
		rtn += command(a, b, "rr\n");
	else
		rtn += command(a, b, "rb\n");
	return (rtn);
}
